#include "header.h"

/**
 * main - entry of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: -1 in failure. 0 in success
 */
int main(int ac, char *av[])
{
	char *argv[100], *command = NULL;/*, *token, *cmd_dup;*/
	size_t len = 0;
	/*int i;*/
	int error_count = 0, argc;

	(void) av;
	if (ac != 1)
		return (-1);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		if (getline(&command, &len, stdin) == -1)
		{
			/*printf("\n");*/
			break;
		}
		argc = word_cnt(command);
		/**
		*cmd_dup = strdup(command), token = strtok(cmd_dup, " \n");
		*
		*for (i = 0; i < argc; i++)
		*{
		*	argv[i] = token;
		*	token = strtok(NULL, " \n");
		*}
		*/
		if (argc != 1)
			perror(av[0]);
		else
		{
			argv[0] = strtok(command, " \n");
			argv[1] = NULL;
			execute(argv, av[0], &error_count);
		}
		/*free(cmd_dup);*/
	}
	free(command);
	return (0);
}


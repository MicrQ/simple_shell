#include "header.h"

/**
 * main - entry of the program
 * Return: -1 in failure. 0 in success
 */
int main(int ac, char *av[])
{
	char *argv[100], *command = NULL, *token, *cmd_dup;
	size_t len = 0;
	int argc = 0, i, error_count = 0;

	(void) av;
	if (ac != 1)
		return (-1);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		if (getline(&command, &len, stdin) == -1)
		{
			printf("\n");
			break;
		}
		argc = word_cnt(command);
		cmd_dup = strdup(command), token = strtok(cmd_dup, " \n");
		for (i = 0; i < argc; i++)
		{
			argv[i] = token;
			token = strtok(NULL, " \n");
		}
		argv[i] = NULL;
		execute(argv, av[0], &error_count);
		free(cmd_dup);
	}
	free(command);
	return (0);
}


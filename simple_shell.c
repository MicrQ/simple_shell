#include "header.h"

/**
 * main - entry of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: -1 in failure. 0 in success
 */
int main(int ac, char *av[])
{
	char *argv[2], *command;
	size_t len = 0;
	int error_count = 0, argc;

	if (ac != 1)
	{
		printf("%s: %d: Can't open %s\n", av[0], error_count, av[1]);
		return (-1);
	}
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		if (getline(&command, &len, stdin) == -1)
		{
			if (isatty(STDIN_FILENO))
			printf("\n");
			break;
		}
		argc = word_cnt(command);
		argv[0] = strtok(command, " \n");
		argv[1] = NULL;
		execute(argv, argc, av[0], &error_count);
	}
	free(command);
	return (0);
}


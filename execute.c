#include "header.h"

/**
 * execute - creates a child process and executes
 *			 given command.
 * @argv: array of pointers that store commands
 * @argc: the number of arguments passed
 * @filename: the filename of the executed program
 * @err: error message counter
 */

void execute(char *argv[], int argc, char *filename, int *err)
{
	pid_t pid = fork();

	(void) err;
	if (pid == -1)
	{
		perror("fork");
		return;
	}
	else if (pid == 0)
	{
		if (argc != 1)
			printf("%s: No such file or directory\n", filename);
		else
		{
			execve(argv[0], argv, NULL);
			perror(filename);
			return;
		}
	}
	else
		wait(NULL);
}


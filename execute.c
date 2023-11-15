#include "header.h"

/**
 * execute - creates a child process and executes
 *			 given command.
 * @argv: array of pointers that store commands
 * @filename: the filename of the executed program
 */

void execute(char *argv[], char *filename, int *err)
{
	/**
	 * if the command should be checked before fork
	 * edit here
	 * and also envp will be edited here
	 */
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return;
	}
	else if (pid == 0)
	{
		execve(argv[0], argv, NULL);
		printf("%s: %d: %s: not found\n", filename, *err = (*err) + 1, argv[0]);
 
		return;
	}
	else
		wait(NULL);
}


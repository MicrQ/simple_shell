#include "header.h"

/**
 * execute - creates a child process and executes
 *			 given command.
 * @argv: array of pointers that store commands
 */

void execute(char *argv[])
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
		printf("%s: command not found\n", argv[0]);
		return;
	}
	else
		wait(NULL);
}


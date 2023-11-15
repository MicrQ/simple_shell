#include "header.h"
/**
 * rcv_command - function to receive command from user input
 * @cmd command line input
 * @num to store length
 * Return: return user input command
 */

char *rcv_command(void)
{
	char *cmd = NULL;
	size_t num = 0;
	ssize_t val;

	printf("$ ");
	val = getline(&cmd, &num, stdin);
	if (val == -1)
	{
		free(cmd);
		return(NULL);
	}
	return (cmd);
}

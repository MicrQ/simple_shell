#include "header.h"

/**
 * main - entry of the program
 * @ac: argument counter
 * @av: argument vector
 * Return: -1 in failure. 0 in success
 */
int main(int ac, char *av[])
{
	char *command = NULL;

	(void) av;
	if (ac != 1)
		return (-1);
	while (1)
	{
		command = rcv_command();
		if (command == NULL)
		{
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
	printf("%s", command);
	free(command);
	}
	return (0);
}


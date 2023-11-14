#include "header.h"

/**
 * word_cnt - counts how many word are in the command
 * @str: a command entered by user
 * Return: number of words
 */
int word_cnt(char *str)
{
	int i = 0;
	char *tok, *delim = " \n", *cmd = strdup(str);

	tok = strtok(cmd, delim);
	while (tok)
	{
		i++;
		tok = strtok(NULL, delim);
	}
	free(cmd);
	return (i);
}

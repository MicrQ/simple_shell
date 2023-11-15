#include "header.h"

/**
 * _strtok - works like strtok
 * @str: string
 * @delim: delimiter
 * Return: ptr or null
 */

char *_strtok(char *str, const char *delim)
{
	static char *last_token;
	char *token;

	if (str != NULL)
	{
		last_token = str;
	}
	else
	{
		if (last_token == NULL)
			return (NULL);
		str = last_token;
	}
	str += strspn(str, delim);
	if (*str == '\0')
	{
		last_token = NULL;
		return (NULL);
	}
	token = str;
	str = strpbrk(token, delim);
	if (str == NULL)
		last_token = NULL;
	else
	{
		*str = '\0';
		last_token = str + 1;
	}
	return (token);
}

#include <stdlib.h>

/**
 * _strdup - contains the copy of the given string
 * @str: given string
 * Return: NULL if str is NULL and
 *         if insufficient space is available
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * i + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	return (s);
}

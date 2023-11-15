#include "header.h"

/**
 * _puts - prints string
 * @str: passed string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
}

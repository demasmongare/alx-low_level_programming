#include "main.h"

/**
 * _puts - function prints a string, followed by a new line to stdout.
 * @str: function parameter
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (i < str[i])
	{
		if (str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}

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

	for (i = 0; i < str[i])
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

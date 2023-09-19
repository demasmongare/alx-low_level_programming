#include "main.h"
/**
 * print_rev - function prints a sting, in reverse, followed by a
 * new line.
 * @s: function parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		while (s[i] >= 0)
		{
			_putchar(s[i]);
			i--;
		}
	}
	_putchar('\n');
}

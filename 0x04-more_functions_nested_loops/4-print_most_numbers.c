#include "main.h"
/**
 * print_most_numbers - Function prints most numbers from 0 - 9,
 * follwowed by a new line.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(48 + i);
	}
	_putchar('\n');

}

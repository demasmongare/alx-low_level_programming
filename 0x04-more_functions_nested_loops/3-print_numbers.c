#include "main.h"
/**
 * print_numbers - Function prints numbers from 0 - 9,
 * followed by a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(48 + i);

	_putchar('\n');
}

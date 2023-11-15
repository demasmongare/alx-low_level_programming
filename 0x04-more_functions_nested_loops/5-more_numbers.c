#include "main.h"
/**
 * more_numbers - Function prints 10 times the numbers from 0 - 14,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n;
	int i = 0;

	while (i <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar(48 + n);
			}
			else
			{
				_putchar(48 + n / 10);
				_putchar(48 + n % 10);
			}
		}
		_putchar('\n');
		i++;
	}
}

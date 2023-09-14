#include <stdio.h>
/**
 * main - Entry point
 * This program prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable initialisation*/
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}

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
	char ch = 'a';

	while (ch < 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");

	return (0);
}

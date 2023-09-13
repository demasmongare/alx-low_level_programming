#include <stdio.h>
/**
 * main - Entry point
 * Program prints the alphabet in lowercase, and then in uppercase,
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable declaration */
	char ch;

	/* Prints alphabet in lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}


	/* prints alpabet in uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

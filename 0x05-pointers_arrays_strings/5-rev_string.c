#include "main.h"
/**
 * rev_string - function reverses a string
 * @s: - function parameter
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	/* variable declaration */
	int i;

	int count = 0;


	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char temp;

		temp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = temp;
	}
}

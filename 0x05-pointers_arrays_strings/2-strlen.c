#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: function parameter
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);

}

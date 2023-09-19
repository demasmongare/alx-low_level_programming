#include "main.h"
/**
 * swap_int - function swaps the value of two integers
 * @a: parameter 1
 * @b:  parameter 2
 *
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}

#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: -the first integer
 * @b: -the second integer
 * Return: value of swap
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

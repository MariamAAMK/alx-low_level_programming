#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: arguments parameter
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list argu;
	int sum;

	va_start(argu, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(argu, int);

	va_end(argu);
	return (sum);
}

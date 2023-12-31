#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}

va_end(args);

printf("\n");
}

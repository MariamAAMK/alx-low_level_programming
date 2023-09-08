#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * if malloc fails, malloc_checked should cause normal process termination
 * with a status value of 98
 * @b: memory allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
		if (a == NULL)
			exit(98);
	return (a);
}

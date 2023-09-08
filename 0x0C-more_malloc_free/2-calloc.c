#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @size: size bytes to allocate
 * @nmemb: elements of array to allocate
 * Return:  a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; (nmemb * size) > j; j++)
		i[j] = 0;
	return (i);
}

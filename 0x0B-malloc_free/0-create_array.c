#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: array size
 * @c: char
 * Description: create array of size size and assign char c
 * Returns: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(size * sizeof(char));
	if (s == NULL || size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: string size
 * @c: char
 * Description: Returns NULL if size = 0
 * Returns: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
			}
	s[i] = '\0';
	return (s);
}

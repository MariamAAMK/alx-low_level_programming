#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, size1, size2, size;
	char *result;

	size1 = 0;
	size2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		while (s1[a++] != '\0')
			size1++;
	}

	if (s2 != NULL)
	{
		a = 0;
		while (s2[a++] != '\0')
			size2++;
	}

	size = size1 + size2;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);

	for (a = 0; a < size1; a++)
		result[a] = s1[a];
	for (b = 0; b < size2; b++, a++)
		result[a] = s2[b];
	result[size] = '\0';

	return (result);
}

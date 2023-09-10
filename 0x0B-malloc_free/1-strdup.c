#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * @str: char
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';

	return (ptr);
}

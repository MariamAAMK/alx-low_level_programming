#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l;
	unsigned int m;
	unsigned int o;
	char *s;

	if (s1 == NULL)
	{
		l = 0;
	}
	else
	{
		for (l = 0; s1[l]; l++)
			;
	}
	if (s2 == NULL)
	{
		m = 0;
	}
	else
	{
		for (m = 0; s2[m]; m++)
			;
	}

	if (m > n)
		m = n;
	s = malloc(sizeof(char) * (l + m + 1));
	if (s == NULL)
		return (NULL);
	for (o = 0; o < l; o++)
		s[o] = s1[o];
	for (o = 0; o < m; o++)
		s[o + l] = s2[o];
	s[l + m] = '\0';
	return (s);
}

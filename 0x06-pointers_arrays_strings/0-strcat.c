#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenation of two strings
 * @dest: first string input
 * @src: second string input
 * Return: first string input
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		b++;
		a++;
		dest[a] = src[b];
	}

	dest[a] = '\0';
	return (dest);
}

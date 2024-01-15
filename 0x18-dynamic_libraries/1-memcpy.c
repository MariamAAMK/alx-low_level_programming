#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @n: number of bytes
 * @src: first memory area address
 * @dest: second  memory area address
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

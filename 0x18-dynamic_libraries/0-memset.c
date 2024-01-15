#include "main.h"

/**
 * _memset - fill n bytes of memory area pointed to by s
 * @n: number of bytes
 * @b: byte value
 * @s: memory area address
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

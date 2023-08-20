#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print the alphabet in lowercase, and then in uppercase'
 * Return: Always 0
 */

int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 90)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}

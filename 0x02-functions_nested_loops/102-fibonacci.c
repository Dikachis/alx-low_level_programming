#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n, a = 1, b = 1, s;

	printf("%ld", a);
	for (n = 1; n < 50; ++n)
	{
		s = a + b;
		printf(", %ld", s);
		a = b;
		b = s;
	}
	putchar(10);
	return (0);
}

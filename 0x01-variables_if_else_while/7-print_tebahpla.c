#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;


	for (n = 'z'; n >= 'a'; --n)
			
		putchar(n);

	putchar(10);

	return (0);
}

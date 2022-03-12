#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * using putchar three times.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar("%c", ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

		putchar("%", ch);

	putchar('\n');
	
	return (0);
}

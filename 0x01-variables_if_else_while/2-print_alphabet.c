#include <stdio.h>

/**
 * main - Entry point to prints the alphabet in lowercase
 * using putchar method.
 * Return: Always 0 (Success)
 */

int main(void)
{

	char ch = 'a';


	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);

		putchar('\n');
		
	return (0);

}

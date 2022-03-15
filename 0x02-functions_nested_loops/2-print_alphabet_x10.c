#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;

	while (n >= 1)
	{

		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}

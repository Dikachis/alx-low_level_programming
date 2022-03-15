#include <unistd.h>
#include <main.h>

/**
 * main - prints _putchar, followed by a new line.
 * executes and prints on entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
		}

	_putchar(10);
	return (0);
}

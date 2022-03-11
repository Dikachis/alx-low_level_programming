#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point to prints exactly that useful piece of art is useful,
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success), else none zero.
 */

int main(void)
{

	write(2, "and that piece of art is useful
	     \" - Dora Korpar, 2015-10-19\n", 59);

	return (1);

}

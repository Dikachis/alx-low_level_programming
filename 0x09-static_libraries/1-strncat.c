#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_n = 0, i = 0;
	char *end = dest, *start = src;

	while (*src)
	{
		src_n++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > src_n)
		n = src_n;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (end);
}

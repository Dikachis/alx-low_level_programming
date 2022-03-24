#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_n = 0, i = 0;
	char *end = dest, *start = src;

	while (*src)
	{
		src_n++;
		src++;
	}

	src_n++;

	if (n > src_n)
		n = src_n;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (end);
}

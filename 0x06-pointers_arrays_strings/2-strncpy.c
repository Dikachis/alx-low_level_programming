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
<<<<<<< HEAD
	int i;
=======
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;
>>>>>>> d99bcd6321e686c3b5ba87146485a848e6d42d79

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
<<<<<<< HEAD
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
=======
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
>>>>>>> d99bcd6321e686c3b5ba87146485a848e6d42d79
}

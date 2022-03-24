#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @s: an input string
 * Return: char pointer to converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

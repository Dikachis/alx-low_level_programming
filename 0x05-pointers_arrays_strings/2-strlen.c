#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int pals = 0;

	while (s[pals] != '\0')
		pals++;
	return (pals);
}

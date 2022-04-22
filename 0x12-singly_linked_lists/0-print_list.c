#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *dikachi;
	unsigned int i;

	dikachi = h;
	for (i = 0; dikachi != NULL; i++)
	{
		if (dikachi->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", dikachi->len, dikachi->str);
		dikachi = dikachi->next;
	}
	return (i);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h);
{
	for (node* h = tail; h != NULL; h = h->next)
	{
		printf("%d\n", h->x);
	}
	return (node*);
}

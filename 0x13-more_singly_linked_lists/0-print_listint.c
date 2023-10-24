#include "lists.h"
#include <stdio.h>

/**
 * print_listint_t - Prints all elements of a linked list
 * @h: head of the list
 *
 * Return: Number of nodes
 */
size_t print_listint_t(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

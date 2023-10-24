#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a linked list
 * @h: head of the list
 *
 * Return: Number of nodes
 */
size_t print_listint_t(const listint_t *h)
{
	register size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

#include "lists.h"

/**
 * listint_len - counts the number of nodes in a list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}

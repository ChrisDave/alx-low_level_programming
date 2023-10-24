#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}

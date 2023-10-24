#include "lists.h"

/**
 * add_nodeint_end - function
 *
 * Description: adds a new node at the end of linked list
 * @head: pointer of typr listint_t
 * @n: const param
 *
 * Return: Returns address to created mode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	new =  malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	t = *head;
	if (t == NULL)
		*head = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
	}
	return (new);
}

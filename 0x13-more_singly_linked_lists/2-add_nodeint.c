#include "lists.h"

/**
 * add_nodeint - function to add anew node at begining
 *
 * @head: pointer to pointer of listint_t
 * @n: n element
 *
 * Return: NULL if it fails otherwise head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/*allocate memory anch check if null*/
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	/*assign new values*/
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}


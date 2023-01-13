#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to head of the list
 * @n: integer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *lastnode;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = temp;
	temp->prev = lastnode;

	return (temp);
}

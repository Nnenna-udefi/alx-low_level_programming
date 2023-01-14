#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: double pointer of the head of the list
 * @idx:  index of the list where the new node should be added
 * @n: node
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;

	if (new == NULL)
		return (NULL);

	idx--;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}

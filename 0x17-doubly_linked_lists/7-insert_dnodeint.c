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

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (new == NULL)
		return (NULL);
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint(h, n));
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}

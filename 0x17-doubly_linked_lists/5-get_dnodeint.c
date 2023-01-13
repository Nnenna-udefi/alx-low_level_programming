#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the nth node
 * Return: node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	count = 0;

	while (temp)
	{
		if (index == count)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL)
}

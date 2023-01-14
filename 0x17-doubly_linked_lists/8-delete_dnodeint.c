#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * of a linked list
 * @index: is the index of the node that should be deleted
 * @head: double pointer to the head of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		index--;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (temp == (*head))
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}

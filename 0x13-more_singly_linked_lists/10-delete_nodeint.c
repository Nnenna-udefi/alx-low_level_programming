#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a listint linked list
 * @index: delete node at this index, starting count at 0
 * @head: head
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *hold;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);
	while (i < index)
	{
		hold = temp;
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}
	if (index == 0)
		*head = temp->next;
	else if (temp->next)
		hold->next = temp->next;
	else
		hold->next = NULL;

	free(temp);
	return (1);
}

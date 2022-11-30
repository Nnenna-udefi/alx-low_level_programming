#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth number of the linked list.
 * @head: head
 * @index: input
 * Return: nth number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;
	while (count < index)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
		count++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}

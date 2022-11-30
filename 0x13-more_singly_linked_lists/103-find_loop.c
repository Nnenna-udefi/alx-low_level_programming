#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	loop = head;

	do {
		if (loop->next)
			loop = loop->next;
		else
			return (NULL);
		if (temp->next->next)
			temp = temp->next->next;
		else
			return (NULL);
	} while (temp != loop);
	loop = head;
	while (temp != loop)
	{
		temp = temp->next;
		loop = loop->next;
	}
	return (loop);
}

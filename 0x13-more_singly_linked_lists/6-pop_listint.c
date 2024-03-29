#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);

	return (i);
}

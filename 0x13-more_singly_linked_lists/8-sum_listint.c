#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: head;
 * Return: 0;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	for (temp = head; temp != NULL; temp = temp->next)
		sum += temp->n;
	return (sum);
}

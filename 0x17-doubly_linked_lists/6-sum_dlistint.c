#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of
 * a linked list
 * @head: head pointer of the list
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		p = p->next;
	}
	return (sum);
}

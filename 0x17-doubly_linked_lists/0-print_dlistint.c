#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num;

	node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num)
}

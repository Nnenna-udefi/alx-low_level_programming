#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_num;

	node_num = 0;

	while (h != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}

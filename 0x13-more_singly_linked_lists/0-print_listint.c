#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (c = h; c != NULL; count++, c = c->next)
		printf("%d\n", c->n);
	return (count);
}

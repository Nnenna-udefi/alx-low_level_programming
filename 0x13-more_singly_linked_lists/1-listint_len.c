#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: linked list head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count = 0;

	if (h == NULL)
		return (0);

	for (h = c; c != NULL; count++, c = c->next)
		;
	return (count);
}

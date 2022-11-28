#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: singly linked list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
#include "lists.h"
/**
 * list_len -  function that returns the number of
 * elements in a linked list_t list
 * @h: single linked list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

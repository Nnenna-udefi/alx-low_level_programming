#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * function can free lists with a loop
 * @h: head of linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *hold;
	size_t size;

	size = 0;
	temp = *h;
	while (temp != NULL)
	{
		size++;
		hold = temp;
		temp = temp->next;
		free(hold);

		if (hold < temp)
			break;
	}
	*h = NULL;
	return (size);
}

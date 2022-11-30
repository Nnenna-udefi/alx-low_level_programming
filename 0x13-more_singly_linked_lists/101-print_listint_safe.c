#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	const listint_t *hold;
	size_t count;

	temp = head;
	if (temp == NULL)
		exit(98);
	count = 0;
	while (temp != NULL)
	{
		hold = temp;
		temp = temp->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (count);
}

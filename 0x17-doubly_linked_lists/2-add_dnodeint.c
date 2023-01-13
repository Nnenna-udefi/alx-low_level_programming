#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	(*head)->prev = temp;
	temp->next = *head;
	*head = temp;
	return (temp);
}

#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a lis
 * @head: pointer of the structure
 * @str: string
 * Return: address of the new element or null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;
	int i, count = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}

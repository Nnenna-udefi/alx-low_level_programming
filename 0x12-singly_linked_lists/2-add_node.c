#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to the structure
 * @str: string
 * Return: address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

#include "hash_tables.h"

/**
 * hash_table_set - function that adds and element to the ahsh table
 * @ht: hash table
 * @key: the key
 * @value: value associated with the key
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, n;
	hash_node_t *new_ht;
	char *copy;

	if (value == NULL || ht == NULL || key == NULL || *key == '\0')
		return (0);
	new_ht = malloc(sizeof(hash_node_t));
	copy = strdup(value); /* duplicates the value string */
	if (copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (n = index; ht->array[n]; n++)
	{
		/* compares the array key and the key */
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = copy;
			return (1);
		}
	}
	if (new_ht == NULL)
	{
		free(copy);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = copy;
	new_ht->next = ht->array[index];
	ht->array[index] = new_ht;
	return (1);
}

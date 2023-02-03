#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key
 * Return: NULL if  key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new_node = ht->array[index];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	return ((new_node == NULL) ? NULL : new_node->value);
}

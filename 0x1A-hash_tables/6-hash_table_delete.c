#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item, *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			item = ht->array[i];
			while (item)
			{
				node = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = node;
			}
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"

/**
 * has_table_print - function that prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");
			while (ht->array[i])
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i])
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}

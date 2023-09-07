#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *b, *hash_free;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		b = ht->array[i];
		while (b)
		{
			hash_free = b;
			b = b->next;
			if (hash_free->key)
				free(hash_free->key);
			if (hash_free->value)
				free(hash_free->value);
			free(hash_free);
		}
	}
	free(ht->array);
	free(ht);
}

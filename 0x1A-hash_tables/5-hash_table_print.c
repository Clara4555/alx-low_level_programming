#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *b;
	int not = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		b = ht->array[i];
		while (b)
		{
			if (not)
				printf(", ");
			printf("'%s': '%s'", b->key, b->value);
			not = 1;
			b = b->next;
		}
	}
	printf("}\n");
}

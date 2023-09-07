#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer
 * @key: key
 * Return: null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t  *b;

	if (!ht || !key || !*key)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	b = ht->array[ind];

	while (b)
	{
		if (!strcmp(key, b->key))
			return (b->value);
		b = b->next;
	}
	return (NULL);
}

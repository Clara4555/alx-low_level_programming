#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size of hash table
 * Return: index of 'key'
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

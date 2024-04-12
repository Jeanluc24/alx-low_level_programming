#include "hash_tables.h"

/**
 * hash_table_set - Adding an element to the hash table
 * @ht: The hash table
 * @key: A key
 * @value: A value associated with the key
 * Return: 1 if its succeeded 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long j;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	j = key_index((const unsigned char *)key, ht->size);

	if (ht->array[j] != NULL && strcmp(ht->array[j]->key, key) == 0)
	{
		ht->array[j]->value = strdup(value);
		return (1);
	}

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[j];
	ht->array[j] = node;

	return (1);
}


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
	unsigned long j, count;
	hash_node_t *ne_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	count = ht->count;
	j = key_index((const unsigned char *)key, count);

	if (ht->array[j] != NULL && strcmp(ht->array[j]->key, key) == 0)
	{
		ht->array[j]->value = strdup(value);
		return (1);
	}

	ne_node = malloc(sizeof(hash_node_t));

	if (ne_node == NULL)
		return (0);

	ne_node->key = strdup(key);
	ne_node->value = strdup(value);
	ne_node->next = ht->array[j];
	ht->array[j] = ne_node;

	return (1);
}

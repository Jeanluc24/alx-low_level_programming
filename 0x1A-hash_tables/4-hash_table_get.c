#include "hash_tables.h"

/**
 * hash_table_get - Retrieving a value associated with a key
 * @ht: Hash table we want to look into
 * @key: The key we are looking for
 * Return: A value associated with the element, or NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int j;

	if (key == NULL || ht == NULL)
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);
	node = ht->array[j];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}

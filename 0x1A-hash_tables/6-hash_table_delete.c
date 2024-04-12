#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *new_node, *next;

	if (!ht)
	{
		return;
	}

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (j < ht->size)
	{
		new_node = (ht->array)[j];
		while (new_node)
		{
			next = new_node->next;
			if (new_node->key)
				free(new_node->key);
			if (new_node->value)
				free(new_node->value);
			new_node->key = NULL;
			new_node->value = NULL;
			free(new_node);
			new_node = next;
		}
		j++;
	}
	free(ht->array);
	free(ht);
}

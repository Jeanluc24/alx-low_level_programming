#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *new_node;
	char *coma = "";

	if (!ht || !ht->array)
	{
		return;
	}

	printf("{");
	while (j < ht->size)
	{
		new_node = ((ht->array)[j]);
		while (new_node)
		{
			printf("%s'%s': '%s'", coma, new_node->key, new_node->value);
			coma = ", ";
			new_node = new_node->next;
		}
		j++;
	}
	printf("}\n");
}

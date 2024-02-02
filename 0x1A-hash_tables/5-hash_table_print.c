#include "hash_tables.h"

/**
 * hash_table_print - func that prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int p = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (p)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			p = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_get - func that retrieves a value assosciated with
 * a key
 * @ht: hash table
 * @key: key
 * Return: Returns the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx = key_index((unsigned char *)key, ht->size);

	if (!ht || !ht->array || !ht->size ||
			!key || strlen(key) == 0)
		return (NULL);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 * create_node - func that creates a node
 * @key: key
 * @val: val
 * Return: return the node, otherwise NULL
 */
hash_node_t *create_node(const char *key, const char *val)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(val);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - func that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1  if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *currentNode;
	unsigned long int idx;

	if (!ht || !ht->array || ht->size == 0 ||
			!key || strlen(value) == 0 || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[idx];
	while (currentNode)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			if (!currentNode->value)
				return (0);
			return (1);
		}
		currentNode = currentNode->next;
	}
	newNode = create_node(key, value);
	if (newNode == NULL)
		return (0);

	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}


#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 *new node at a given position
 * @h: head node
 * @idx: index where the new node will be
 * @n: number
 * Return: returns the new node, otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp = *h, *tmp2;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
	}
	tmp2 = tmp->next;
	tmp->next = newNode;
	tmp2->prev = newNode;
	newNode->next = tmp2;
	newNode->prev = tmp;
	return (newNode);
}

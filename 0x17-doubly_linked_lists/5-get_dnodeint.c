#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node of a dlistint_t list
 * @head: ptr to list
 * @index: index of the node
 * Return: returns the nth node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
		if (i == index)
			return (tmp);
	}
	return (NULL);
}

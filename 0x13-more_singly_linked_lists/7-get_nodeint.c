#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of a
 * listint_t linked list
 * @head: ptr to the first node
 * @index: index of the node
 * Return: returns the nth node of a listint_t, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp)
	{
		if (i == index)
		{
			head = tmp;
			return (head);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}

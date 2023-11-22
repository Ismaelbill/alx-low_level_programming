#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of a listint_t linked list
 * @head: ptr to first node
 * @index: index
 * Return: 1 if it succeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;

	if (!*head || !head)
		return (-1);
	prev = *head;
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!prev)
			return (-1);
	}
	prev = current->next;
	current->next = prev->next;
	free(prev);
	return (1);
}

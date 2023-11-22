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
	listint_t *ptr, *current;

	if (!*head || !head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
			return (-1);
	}
	ptr = current->next;
	current->next = ptr->next;
	free(ptr);
	return (1);
}

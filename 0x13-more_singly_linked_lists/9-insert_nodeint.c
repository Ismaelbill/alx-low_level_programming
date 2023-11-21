#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: ptr to the first node
 * @idx: number
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp;
	unsigned int i = 1;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;

	tmp = *head;

	if (idx == 0)
	{
		ptr->next = tmp;
		*head = ptr;
		return (*head);
	}

	while (i != idx)
	{
		tmp = tmp->next;
		i++;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);
}

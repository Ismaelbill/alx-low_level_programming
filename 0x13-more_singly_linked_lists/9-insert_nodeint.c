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

	tmp = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = tmp;
		*head = ptr;
		return (*head);
	}

	while (idx > 1)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
		{
			free(tmp);
			return (NULL);
		}
	}
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);
}

#include "lists.h"


/**
 * list_len - function that returns the number of elements
 * in a linked 'list_t' list
 * @h: pointer to struct node
 * Return: returns number of elements
 */

size_t list_len(listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}


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
	unsigned int i = 1, len = list_len(*head);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;

	tmp = *head;
	if (len < idx)
		return (NULL);

	while (i != idx)
	{
		tmp = tmp->next;
		i++;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (*head);
}

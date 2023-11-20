#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: ptr to ptr to struct
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	tmp = *head;
	while (tmp)
	{
		current = tmp->next;
		free(tmp);
		tmp = current;
	}
	*head = NULL;
	head = NULL;
}

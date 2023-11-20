#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: ptr to struct
 */

void free_listint(listint_t *head)
{
	listint_t *tmp, *nextNode;

	tmp = head;
	while (tmp != NULL)
	{
		nextNode = tmp->next;
		free(tmp);
		tmp = nextNode;
	}
}

#include "lists.h"

/***/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;

	while (index != 1)
	{
		tmp = tmp->next;
		index--;
		if (tmp == NULL)
			return (-1);
	}
	tmp2 = tmp->prev;
	tmp2->next = tmp->next;
	tmp->next->prev = tmp2;
	free(tmp);
	tmp = NULL;
	return (1);
}

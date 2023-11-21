#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n)
 * of a listint_t
 * @head: ptr to the first node
 * Return: return the sum of all the data, otherwise 0
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int i = 0;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);

}

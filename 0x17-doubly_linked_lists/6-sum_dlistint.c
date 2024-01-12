#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: head node
 * Return: returns the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int i = 0;

	if (!head)
		return (0);
	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}

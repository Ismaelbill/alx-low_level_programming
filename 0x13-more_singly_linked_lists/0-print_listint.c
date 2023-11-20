#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 * @h: pointer to struct
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int i = 0;

	tp = h;
	while (tp != NULL)
	{
		printf("%d\n", tp->n);
		i++;
		tp = tp->next;
	}
	return (i);
}

#include "lists.h"

/**
 * print_dlistint - function prints all the elements of a list
 * @h: ptr to the list head node
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t n = 0;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}

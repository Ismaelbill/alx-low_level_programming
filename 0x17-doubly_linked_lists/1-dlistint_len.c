#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in linked list
 * @h: ptr to head node
 * Return: return the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t n = 0;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}

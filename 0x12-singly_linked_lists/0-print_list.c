#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to struct lists_s
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
	}
	return (i);
}

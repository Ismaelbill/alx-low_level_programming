#include "lists.h"


/**
 * _strlen - function counts the length of a string
 * @str: string
 * Return: (0) if 'str' is NULL, otherwise
 * the length
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

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
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
	}
	return (i);
}

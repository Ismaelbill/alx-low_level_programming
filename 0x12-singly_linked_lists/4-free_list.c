#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to struct
 */

void free_list(list_t *head)
{
	list_t *ptr, *next_node;

	ptr = head;

	while (ptr != NULL)
	{
		next_node = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next_node;
	}
}

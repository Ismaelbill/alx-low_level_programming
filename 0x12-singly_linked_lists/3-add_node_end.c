#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: ptr to ptr to struct
 * @str: ptr to string
 * Return: returns the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(strdup(str));
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newNode;
	return (*head);
}

#include "lists.h"

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: ptr to ptr to struct
 * @str: ptr to str
 * Return: return the address of the new element,
 * otherwise NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;

	*head = newNode;
	return (*head);
}

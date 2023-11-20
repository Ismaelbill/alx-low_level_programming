#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list
 * @head: ptr to ptr to struct
 * @n: constant int
 * Return: return the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;
	return (*head);
}

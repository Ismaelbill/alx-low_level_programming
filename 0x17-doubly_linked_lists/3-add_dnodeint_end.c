#include "lists.h"

/**
 * add_dnodeint_end - funciton adds a new node at the end of a dlistint_t list
 * @head: ptr to ptr to list
 * @n: constant number
 * Return: returns the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = newNode;
		newNode->prev = tmp;
	}

	return (newNode);
}

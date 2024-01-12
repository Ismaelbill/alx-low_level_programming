#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning of a list
 * @head: ptr to ptr to list
 * @n: constant number
 * Return: returns the added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	if (!*head)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (*head);
}

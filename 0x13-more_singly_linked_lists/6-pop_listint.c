#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: ptr to ptr to struct
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int i = 0;

	if (*head == NULL || head == NULL)
		return (i);
	newNode = *head;

	(*head) = newNode->next;
	i = newNode->n;
	free(newNode);
	newNode = (*head);
	while (newNode)
		newNode = newNode->next;

	return (i);
}

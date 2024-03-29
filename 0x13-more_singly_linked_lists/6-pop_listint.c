#include "lists.h"

/**
 * pop_listint - deletes the head of a node in a linked list
 * @head: pointer to the first element in a linked list
 * Return: data that was deleted or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (y);
}

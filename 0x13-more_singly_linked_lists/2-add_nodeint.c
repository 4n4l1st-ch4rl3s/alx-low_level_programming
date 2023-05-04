#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of the linked list
 * @head: pointer to the first node in a linked list
 * @n: data to be inserted in that new node
 * Return: pointer to new node or NUll it it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}

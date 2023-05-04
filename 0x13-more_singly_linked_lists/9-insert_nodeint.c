#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list at a given psn
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be added
 * @n: data to insert in the node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *y;
	listint_t *tmp = *head;

	y = malloc(sizeof(listint_t));
	if (!y || !head)
		return (NULL);

	y->n = n;
	y->next = NULL;

	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}
	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			y->next = tmp->next;
			tmp->next = y;
			return (y);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}

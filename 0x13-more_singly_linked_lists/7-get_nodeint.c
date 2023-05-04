#include "lists.h"

/**
 * get_nodeint_at_index - return the node at a partivular index in a list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node to retutn. or NULL if it fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}
	return (y ? y : NULL);
}

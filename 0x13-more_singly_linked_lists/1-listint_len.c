#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to linked list of type listint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

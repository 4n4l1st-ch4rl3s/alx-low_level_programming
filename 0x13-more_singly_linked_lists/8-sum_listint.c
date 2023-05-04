#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *x = head;

	while (x)
	{
		total += x->n;
		x = x->next;
	}
	return (total);
}

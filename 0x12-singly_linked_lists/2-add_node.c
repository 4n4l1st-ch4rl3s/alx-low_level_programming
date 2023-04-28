#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new a node at the beginning of a new list
 * @head: pointer to a pointer in the list_t list
 * @str: sting to add in the node
 * Return: address of new element in node or Null incase of failure;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added as a new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	new == NULL ? (free(new), NULL) : 0;

	new->str = strdup(str);
	new->str == NULL ? (free(new), NULL) : 0;
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

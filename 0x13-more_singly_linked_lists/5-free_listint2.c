#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head : Pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	/* Declare a new node and tempNode for traversal */
	listint_t *presentNode;

	/* Check if head is NULL */
	if (*head == NULL)
	{
		return;
	}

	/* Traverses the list and freeing each node */
	while (*head != NULL)
	{
		/* Set presentNode to nex node */
		presentNode = (*head)->next;
		free(*head);
		/* Move head to the next node */
		*head = presentNode;
	}

	/* Set head to NULL */
	*head = NULL;
}

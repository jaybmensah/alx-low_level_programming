#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 * linked list.
 * @head: Pointer to a pointer to the first node of the
 * linked list.
 *
 * Return: Data of the deleted node, or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	/* Declare a pointer to the first node of the list */
	listint_t *tempNode = NULL;
	int n = 0;

	/* Check for empty list and return 0 if empty */
	if (*head == NULL)
		return (0);

	/* Save the data of the first node */
	n = (*head)->n;

	/* Shifts the head pointer to the next node */
	tempNode = (*head)->next;
	/* Free the first node */
	free(*head);
	/* Set the head pointer to tempNode */
	*head = tempNode;

	return (n);
}

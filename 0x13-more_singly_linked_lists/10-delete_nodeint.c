#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index of a listint_t linked list.
 * @head: Pointer to a pointer to the first node of the list
 * @index: Index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 for Success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crntNode = NULL, *prevNode;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(crntNode);
		return (1);
	}

	prevNode = *head;
	crntNode = (*head)->next;

	for (i = 1; crntNode != NULL && i < index; i++)
	{
		prevNode = crntNode;
		crntNode = crntNode->next;
	}

	if (crntNode == NULL)
		return (-1);

	prevNode->next = crntNode->next;
	free(crntNode);
	return (1);
}


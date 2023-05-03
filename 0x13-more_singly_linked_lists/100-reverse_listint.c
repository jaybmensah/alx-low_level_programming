#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t
 * linked list
 * @head: A pointer to the pointer of the head node of the list
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL, *nxtNode = NULL;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		nxtNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nxtNode;
	}

	(*head)->next = prevNode;

	return (*head);
}

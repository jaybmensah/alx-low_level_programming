#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * at a given position
 * @head: Pointer to the pointer to the head of the linked list
 * @idx: Index of the list where the new node should be added
 * @n: Data to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode;
	unsigned int i;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	tempNode = *head;
	for (i = 0; tempNode && i < idx - 1; i++)
		tempNode = tempNode->next;

	if (!tempNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = tempNode->next;
	tempNode->next = newNode;

	return (newNode);
}

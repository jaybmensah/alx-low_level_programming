#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of
 * a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node starting at 0
 *
 * Return: The nth node of the list or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *crntNode = head;
	unsigned int crntIndex = 0;

	while (crntNode != NULL)
	{
		if (crntIndex == index)
		{
			return (crntNode);
		}

		crntNode = crntNode->next;
		crntIndex++;
	}

	return (NULL);
}

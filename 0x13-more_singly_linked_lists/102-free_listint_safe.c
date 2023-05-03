#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t linked list
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tempNode, *crntNode = *h;
	size_t count = 0;

	while (crntNode != NULL)
	{
		count++;
		if (crntNode < crntNode->next)
		{
			tempNode = crntNode;
			crntNode = crntNode->next;
			free(tempNode);
		}
		else
		{
			free(crntNode);
			*h = NULL;
			break;
		}
	}
	return (count);
}


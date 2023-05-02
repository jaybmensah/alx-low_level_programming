#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head : Pointer to the head of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	/* Declare a new node and tempNode for traversal */
	listint_t *presentNode;

	/* Traverses the linked list while head is not NULL */
	while (head != NULL)
	{
		/* Set presentNode to head */
		presentNode = head;
		/* Move head to the next node */
		head = head->next;
		/* Free the memory allocated to presentNode */
		free(presentNode);
	}
}

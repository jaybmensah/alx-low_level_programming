#include "lists.h"

/**
 * add_nodeint_end - This function adds new node at the end
 * of listint_t * linked list.
 * @head : Pointer to head of linked list
 * @n : Value/data to store in new node
 *
 * Return: Adress of new node, NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare a new node and tempNode for traversal */
	listint_t *newNode, *tempNode;

	/* Allocate memory to the new node */
	newNode = malloc(sizeof(listint_t));

	/* Check if new allocation was successful */
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Set value of new node to n */
	newNode->n = n;

	/* Set next of new node to NULL */
	newNode->next = NULL;

	/* Check if the head pointer is NULL */

	if (*head == NULL)
	{
		/* Set the head pointer to the new node */
		*head = newNode;
		return (newNode);
	}

	tempNode = *head;

	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}

	/* tempNode->next should point to newNode */
	tempNode->next = newNode;

	return (newNode);
}

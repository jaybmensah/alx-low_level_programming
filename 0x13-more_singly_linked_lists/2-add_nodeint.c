#include "lists.h"

/**
 * add_nodeint - This function adds new node at the beginning
 * of listint_t * list.
 * @head : Pointer to head of linked list
 * @n : Value/data to store in new node
 *
 * Return: Adress of new node, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a new node */
	listint_t *newNode;

	/* Allocate memory to the new node */
	newNode = malloc(sizeof(listint_t));

	/* Check if new allocation was successful */
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Set value of new node to n */
	newNode->n = n;

	if (*head == NULL)/* Check if the list is empty */
	{
		newNode->next = NULL;
	}
	else
	{
		/* Point to what head was pointing to */
		newNode->next = *head;
	}
	/* Redirect head to point to new node */
	*head = newNode;

	return (*head);
}

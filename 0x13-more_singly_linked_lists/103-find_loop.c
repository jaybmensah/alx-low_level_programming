#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			/* Loop detected */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	/* No loop */
	return (NULL);
}


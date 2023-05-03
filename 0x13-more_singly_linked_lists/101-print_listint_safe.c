#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: A pointer to the head node of the list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow_ptr = head, *fast_ptr = head;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			count++;
			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
				count++;
				slow_ptr = slow_ptr->next;
			}
			exit(98);
		}
		else
		{
			count++;
		}
	}

	if (slow_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
		slow_ptr = slow_ptr->next;
	}

	return (count);
}

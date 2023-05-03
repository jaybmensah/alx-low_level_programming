#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: Pointer to head of list.
 *
 * Return: Sum of all data (n) in the list,
 * 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int lst_sum = 0; /* Initialize sum(lst_sum) variable */

	/* Traverse the linked list, and adding data to sum */
	while (head != NULL)
	{
		lst_sum += head->n;
		head = head->next;
	}

	return (lst_sum); /* Return the sum (lst_sum) */
}


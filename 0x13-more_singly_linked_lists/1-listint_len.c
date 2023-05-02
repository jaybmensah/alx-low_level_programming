#include "lists.h"

/**
 * listint_len - This function return the number of elements in a linked
 * listint_t list.
 * @h : Pointer to head of list
 *
 * Return: No. of nodes
 */

size_t listint_len(const listint_t *h)
{
	/* Initialize a counter for the number of nodes */
	size_t node_ctr = 0;
	/* Create a pointer to the current node, starting preferrably at the head */
	const listint_t *curr_node = h;

	/* Loop throught the list until the end */
	while (curr_node != NULL)
	{
		node_ctr++;/* Increment node_ctr */
		curr_node = curr_node->next;/* Moves ptr to next node */
	}

	return (node_ctr);/* Returns the number of nodes */
}

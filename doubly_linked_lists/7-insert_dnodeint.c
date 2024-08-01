#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Integer to add to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;
	/** Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/** Case 1: Insert at the beginning of the list (idx == 0) */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/** Case 2: Traverse the list to find the position */
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	/** Check if the index is out of bounds */
	if (current == NULL || (current->next == NULL && i < idx - 1))
	{
		free(new_node);
		return (NULL);
	}
	/** Case 3: Insert the new node between the current and next nodes */
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}

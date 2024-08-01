#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of list
 * @head: the head of the list
 * @n: value stocked in new_node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *last_temp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last_temp = *head;

	while (last_temp->next != NULL)
	{
		last_temp = last_temp->next;
	}

	last_temp->next = new_node;
	new_node->prev = last_temp;

	return (new_node);
}

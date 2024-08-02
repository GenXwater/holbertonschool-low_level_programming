#include "lists.h"

/**
 * delete_dnodeint_at_index - Del the node at a given index in a doubly list
 * @head: header of list
 * @index: node at delete
 * Return: 1 if succes or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *current = *head; /** temp pour parcourir */

	if (head == NULL || *head == NULL)
		return (-1);

	/** parcourir le noeud à l'index spécifié */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	/** si le noeud à suppri est introuvable */
	if (current == NULL)
		return (-1);

	/** si le noeud à supprim est le 1er */
	if (current == *head)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	}

	else
	{
		if (current->next != NULL)
			current->next->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = current->next;
	}

	free(current);

	return (1);
}

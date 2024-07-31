#include "lists.h"

/**
 * free_list - libère la liste
 * @head: head
 */

void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head);
	}
}

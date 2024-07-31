#include "lists.h"

/**
 * free_list - libère la liste
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);  /** Libère la mémoire pour la chaîne de caractères */
		free(temp);       /** Libère le nœud */
	}
}


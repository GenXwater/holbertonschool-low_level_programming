#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	list_t *temp;
	size_t len = 0;

	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		exit(1);
	}

	element->str = strdup(str);
	if (element->str == NULL)
	{
		free(element);
		exit(1);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		/** Remplace _strlen */
	}
	element->len = len;

	element->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = element;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = element;
	}

	return (*head);
}


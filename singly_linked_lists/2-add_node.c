#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
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

	/** Remplace _strlen */
	for (len = 0; str[len] != '\0'; len++)
	{
		/** Rien à faire ici, juste compter les caractères */
	}
	element->len = len;

	/**-----------------------*/

	element->next = *head;
	*head = element;

	return (*head);
}

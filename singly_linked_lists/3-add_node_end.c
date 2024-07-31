#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
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

	for (len = 0; str[len] != '\0')
	{
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

	return (*head)
}

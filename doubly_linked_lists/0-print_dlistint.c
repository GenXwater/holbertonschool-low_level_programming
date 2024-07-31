#include "lists.h"

/**
 * print_dlistint - print the list
 * @h: header
 *
 * Return: the numbre d'élements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

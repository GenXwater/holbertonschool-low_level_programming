#include "lists.h"

/**
 * list_len - number of elements in a linked
 * @h: - Pointer to he head of the list
 *
 * Return: the number elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			h = h->next;
			++count;
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}

	return (count);
}

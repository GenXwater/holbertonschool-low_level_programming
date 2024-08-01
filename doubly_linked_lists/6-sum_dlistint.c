#include "lists.h"

/**
 * sum_dlistint - sum of all value
 * @head: head of list
 * Return: 0 (ok)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

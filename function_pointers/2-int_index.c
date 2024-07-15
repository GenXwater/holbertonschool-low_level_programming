#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to use to compare values
 *
 * Return: The index of the first element for which the comparison function
 *         returns a non-zero value, or -1 if no match is found or if size is 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

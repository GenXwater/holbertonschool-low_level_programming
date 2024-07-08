#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: la size de mon array
 * @c: the char to initialize the array with
 *
 * Return: A pointer to the array
 * NULL si c'est un echec ou si ma size est 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

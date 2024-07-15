#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/*
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	/** Itère chaque élément du tableau */
	for (i = 0; i < size; i++)
		/**
		 * Appelle fonction pointée par action sur l'élément
		 * courant du tableau
		 */
		action(array[i]);
}

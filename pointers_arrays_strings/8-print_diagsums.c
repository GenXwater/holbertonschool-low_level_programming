#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sum.
 * @a: an array of pointers of integers
 * @size: number of rows columns
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/** somme de la diagonal principale */
		sum1 += a[i * size + i];

		/** Somme de la diagnale secondaire */
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}

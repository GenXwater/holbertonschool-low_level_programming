#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 *
 * @*a : devient *b
 * @*b : devient *a
 */

void swap_int(int *a, int *b)
{
	int temp = 0;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

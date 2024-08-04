#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: the first number to compare for flip (on his binary version)
 * @m: the second number to compare for flip (on his binary version)
 *
 * Return: returns flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;/**count bit nb to find*/
	unsigned long int bitmask = 1;/**check every bit*/

	while (n || m)
	{
		if ((n & bitmask) != (m & bitmask))
			flip++;

		n >>= 1;
		m >>= 1;
	}
	return (flip);
}

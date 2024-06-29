#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return dest;
}

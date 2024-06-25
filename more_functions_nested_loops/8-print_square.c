#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * If size is 0 or less, the function should print only a new line
 *
 * Return: 0 (ok)
 */

void print_square(int size)
{	
	int row, square;

	{
	for (row = 0; row < size; row++)
		{
		for (square = 0; square < size; square++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}

	if (size > 0)
	{
		_putchar('\n');
	}
}

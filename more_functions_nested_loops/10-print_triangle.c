#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	for (column = 1; column <= size; column++)
	{
		for (row = column; row < size; row++)
		{
			_putchar('.');
		}
		for (row = 0; row < column; row++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

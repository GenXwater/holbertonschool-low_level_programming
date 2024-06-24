#include "main.h"

/**
 * print_diagonal - Imprime une ligne diagonale
 * @n: Nombre de fois que le caractère '\' doit être imprimé
 */

void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

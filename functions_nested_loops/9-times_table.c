#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && col > 0)
			{
				_putchar(' '); /** Deux espaces pour les nombres à un chiffre */
			}
			else
			{
				_putchar(' '); /** Un espace pour les nombres à deux chiffres */
			}

			if (product < 10)
			{
				_putchar(' '); /** Un espace pour les nombres à un chiffre */
			}
			else
			{
				_putchar((product / 10) + '0'); /** Affiche la dizaine */
			}

			_putchar((product % 10) + '0'); /** Affiche l'unité */
		}
		_putchar('\n');
	}
}


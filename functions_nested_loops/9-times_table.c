#include "main.h"

/**
 * times_table - la table de multiplication par 9, en commençant par 0
 *               Chaque produit est formaté avec une virgule et un espace
 */
void times_table(void)
{
	int ligne, colonne, produit;

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (colonne = 0; colonne <= 9; colonne++)
		{
			produit = ligne * colonne;

			if (colonne == 0)
			{
				_putchar('0' + produit);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (produit <= 9)
				{
					_putchar(' ');
					_putchar('0' + produit);
				}
				else
				{
					_putchar('0' + produit / 10);
					_putchar('0' + produit % 10);
				}
			}
		}
		_putchar('\n');
	}
}


#include "main.h"

/**
 * times_table - affiche la table de multiplication par 9, en commençant par 0
 */
void times_table(void)
{
	int ligne, colonne, produit;

	for (ligne = 0; ligne <= 9; ligne++)
	{

		for (colonne = 0; colonne <= 9; colonne++)
		{
			produit = ligne * colonne;

			if (colonne > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (produit < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}


			if (produit >= 10)
			{
				_putchar((produit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((produit % 10) + '0');
		}
		_putchar('\n');
	}
}


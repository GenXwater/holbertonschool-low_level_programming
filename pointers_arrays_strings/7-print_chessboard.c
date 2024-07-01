#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche un échiquier.
 * @a: Tableau 2D représentant l'échiquier.
 *
 * Description: La fonction parcourt chaque ligne et chaque colonne
 * de l'échiquier et affiche chaque pièce ou espace en utilisant `putchar`.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/** Parcourir chaque ligne de l'échiquier */
	for (i = 0; i < 8; i++)
	{
		/** Parcourir chaque colonne de l'échiquier */
		for (j = 0; j < 8; j++)
		{
			/** Afficher la pièce ou l'espace */
			putchar(a[i][j]);
		}
		/** Passer à la ligne suivante après chaque ligne de l'échiquier */
		putchar('\n');
	}
}

#include "main.h"
#include <stdio.h>

/**
 * free_grid - Libère la mémoire allouée pour un tableau 2D d'entiers.
 * @grid: Le tableau 2D à libérer.
 * @height: La hauteur du tableau.
 *
 * Description: Cette fonction libère la mémoire allouée pour un tableau 2D
 * d'entiers précédemment créé par la fonction alloc_grid. Elle libère
 * la mémoire allouée pour chaque ligne du tableau, puis la mémoire allouée
 * pour les pointeurs d'entiers.
 *
 * Return: Cette fonction ne retourne rien.
 */
void free_grid(int **grid, int height)
{
	int i; /** déclare une fonction entière pr la boucle */

	/** Vérification que le tableau n'est pas NULL */
	if (grid == NULL)
		return;

	/** Libération de la mémoire allouée pr chq ligne du tableau */
	for (i = 0; i < height; i++)
		free(grid[i]); /** Libère la mémoire allouée pr une ligne */

	/** Libération de la mérmoire allouée pr les pointeurs d'entiers */
	free(grid);
}

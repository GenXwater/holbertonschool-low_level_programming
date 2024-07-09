#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Alloue de la mémoire pour un tableau 2D d'entiers.
 * @width: La largeur du tableau.
 * @height: La hauteur du tableau.
 *
 * Description: fonction qui alloue de la mémoire pour un tableau 2D d'entiers
 *              de taille width x height. Chq élmt du tbl. est initialisé
 *              à 0. Si width ou height est nég ou nul, la fctn renvoie NULL.
 *              La fonction renvoie NULL en cas d'échec.
 *
 * Return: Un pointeur vers le tableau 2D alloué, ou NULL en cas d'échec.
 */
int **alloc_grid(int width, int height)
{
	int **grid; /** Déclare un pointeur vers un pointeur d'entier */
	int i, j; /** déclare 2 variables entières pr les boucles */

	if (width <= 0 || height <= 0)
		return (NULL);

	/** allocation de la mémoire pr ls pointeurs d'entier */
	grid = malloc(height * sizeof(int *));

	/** Vérification de l'allocation de la mémoire */
	if (grid == 0)
		return (NULL);

	/** Allocation de la mémoire pour chq lignes du tableau 2D */
	for (i = 0; i < height; i++)
	{
		/** Allocation de la mémoire pr 1 ligne de widtg entier */
		grid[i] = malloc(width * sizeof(int));

		/** Vérification de l'allocation de la mémoire pr chq lignes */
		if (grid[i] == NULL)
		{
			/** libération de la mémoire allouée en cas d'échec */
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		/** Initialisation de chq elements du tableau 2D à 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid); /** Retour du pointeur vr le tableau 2D alloué */
}


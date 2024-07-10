#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers.
 * @min: La valeur minimale à inclure dans le tableau.
 * @max: La valeur maximale à inclure dans le tableau.
 *
 * Description: Cette fonction crée un tableau d'entiers qui contient ttes les
 *              valeurs de min (inclus) à max (inclus), triées de min à max
 *              Si min est supérieur à max, la fonction renvoie NULL.
 *              Si l'allocation de mémoire échoue, la fonction
 *              renvoie également NULL.
 *
 * Return: Un pointeur vers le nouveau tableau alloué
 *         ou NULL en cas d'échec.
 */
int *array_range(int min, int max)
{
	int *array; /** Déclare un pointeur vers le nouveau tableau alloué */
	int len; /** Déclare une variable pour stocker la longueur du tableau */
	int i; /** Déclare une variable pour la boucle */

	/** Vérifie si min est supérieur à max, et renvoie NULL dans ce cas */
	if (min > max)
		return (NULL);

	/** Calcule la longueur du tableau */
	len = max - min + 1;

	/** Alloue de la mémoire pour le nouveau tableau */
	array = malloc(len * sizeof(int));

	/** Vérifie que l'allocation de mémoire a réussi */
	if (array == NULL)
		return (NULL);

	/** Initialise les éléments du tableau avec les valeurs de min à max */
	for (i = 0; i < len; i++)
	{
		array[i] = min + i;
	}

	/** Retourne un pointeur vers le nouveau tableau alloué */
	return (array);
}


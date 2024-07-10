#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pr un array d'éléments de
 *           taille spécifiée
 * @nmemb: Le nombre d'éléments à allouer.
 * @size: La taille en bytes de chaque élément.
 *
 * Description: Cette fonction alloue de la mémoire pour un tableau
 *              d'éléments de taille spécifiée en utilisant la
 *              fonction malloc. La mémoire allouée est initialisée
 *              à zéro. Si nmemb ou size est égal à zéro, la fonction
 *              renvoie NULL. Si l'allocation de mémoire échoue, la
 *              fonction renvoie également NULL.
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /** Déclare un pointeur vers la mémoire allouée */
	unsigned int i; /** Déclare une variable pour la boucle */
	
	/** Calcule la taille totale de la mémoire à allouer */
        unsigned int total_size = nmemb * size;

	/** Vérifie si nmemb ou size est égal à 0 et renvoie NULL dans ce cas */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/** Alloue de la mémoire pour le tbl d'éléments de taille spécifiée */
	ptr = malloc(total_size);

	/** Vérifie que l'allocation de mémoire a réussi */
	if (ptr == NULL)
		return (NULL);

	/** Initialise chaque byte de la mémoire allouée à zéro */
	for (i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	/** Retourne un pointeur vers la mémoire allouée */
	return (ptr);
}

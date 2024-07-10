#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc.
 * @b: La taille de la mémoire à allouer.
 *
 * Description: fonction alloue de la mémoire en utilisant malloc et vérifie
 *              si l'allocation a réussi. Si l'allocation échoue, la fonction
 *              termine le processus avec le code de sortie 98.
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL si b est égal à 0
 */
void *malloc_checked(unsigned int b)
{
	/**
	 * Déclare un pointeur void pour stocker le résultat
	 * de l'allocation de mémoire
	 */
	void *checked;

	/** Allocation de la mémoire en utilisant malloc */
	checked = malloc(b);

	/** Vérification que l'allocation a réussi */
	if (checked == NULL)
	{
		/**
		 * Terminaison du processus avec le code de sortie 98 en cas
		 * d'échec de l'allocation
		 */
		exit(98);
	}

	/** Retour du pointeur vers la mémoire allouée */
	return (checked);
}

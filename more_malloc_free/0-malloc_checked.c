#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant malloc.
 * @b: La taille de la mémoire à allouer.
 *
 * Description: fnction alloue la mémoire en utilisant malloc et vérifie
 *              si l'allocation a réussi. Si l'allocation échoue, la fonction
 *              termine le processus avec le code de sortie 98.
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL si b est égal à 0
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	/** Vérification que b n'est pas égale à 0 */
	if (b == 0)
		return (NULL);

	/** Allocation de la mémoire en utilisant malloc */
	checked = malloc(b);

	/** Vérification que l'allocation a réussi */
	if (checked == NULL)
		/** Terminer le processus avec 98 en sorti en cas d'echec de l'alloc */
		exit(98);

	/** Retour du pointeur vers la mémoire allouée */
	return (checked);
}

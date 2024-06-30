#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: chaîne de destination où sera ajoutée la chaîne source
 * @src: chaîne source à ajouter à la chaîne destination
 *
 * Return: pointeur vers la chaîne de destination `dest`
 */
char *_strcat(char *dest, char *src)
{
	/** 
	 * result - pointeur vers le début de la chaîne de destination
	 */
	char *result = dest;

	/** 
	 * Boucle pour atteindre la fin de dest
	 */
	while (*dest != '\0')
	{
		dest++;
	}

	/** 
	 * Boucle pour copier les caractères de src à la fin de dest
	 */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/** 
	 * Ajout du caractère nul de fin à la nouvelle chaîne
	 */
	*dest = '\0';

	/** 
	 * Retourne le pointeur vers la chaîne de destination originale
	 */
	return result;
}

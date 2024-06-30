#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatène deux chaînes avec n caractères de src
 * @dest: chaîne de destination où sera ajoutée la chaîne source
 * @src: chaîne source à ajouter à la chaîne destination
 * @n: nombre maximum de caractères à ajouter de src à dest
 *
 * Return: pointeur vers la chaîne de destination `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	/**
	 * result - pointeur vers le début de la chaîne de destination
	 */
	char *result = dest;

	/**
	 * i - variable pour parcourir dest jusqu'à la fin
	 */
	int i = 0;

	/**
	 * Trouver la fin de dest
	 */
	while (*dest != '\0')
	{
		dest++;
	}

	/**
	 * Ajouter jusqu'à n caractères de src à la fin de dest
	 */
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	/**
	 * Si src a moins de n caractères, ajouter le caractère nul de fin
	 */
	if (i < n)
	{
		*dest = '\0';
	}

	/**
	 * Retourner le pointeur vers la chaîne de destination originale
	 */
	return result;
}

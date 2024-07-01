#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatène deux chaînes avec n caractères de src
 * @dest: Chaîne de destination où sera ajoutée la chaîne source
 * @src: Chaîne source à ajouter à la chaîne destination
 * @n: Nombre maximum de caractères à ajouter de src à dest
 *
 * Return: Pointeur vers la chaîne de destination `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	if (i < n)
	{
		*dest = '\0';
	}

	return (result);
}


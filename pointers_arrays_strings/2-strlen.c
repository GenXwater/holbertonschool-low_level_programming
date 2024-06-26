#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaine de char
 * @s : Pointeur vers la chaîne dont la longueur doit être calculée
 *
 * Return: Longueur de la chaine (nbr de char, exclu le char \0 NUL)
 */

int _strlen(char *s)
{
	int longueur = 0;

	while (*s != '\0')
	{
		longueur++;
		s++;
	}
	return (longueur);
}

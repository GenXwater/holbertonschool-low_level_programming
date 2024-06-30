#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copie au plus n caractères de la chaîne src dans la chaîne dest.
 * @dest: Chaîne de destination où la copie sera effectuée.
 * @src: Chaîne source à copier dans dest.
 * @n: Nombre maximal de caractères à copier de src à dest.
 *
 * Return: Pointeur vers la chaîne de destination `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}


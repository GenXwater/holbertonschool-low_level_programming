#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @n: contient la donnée
 * @src: contient l'adresse de la source
 * @dest: doit pointer vers *src
 *
 * Return: dest (ok)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

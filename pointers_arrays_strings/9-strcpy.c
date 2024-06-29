#include "main.h"

/**
 * _strcpy - copies the string pointed to src from dest
 * @src: contient et incrémente, puis copie dans dest
 * @dest: recopie les valeurs de src, et assurer le final par '\0'
 *
 * Return: dest (ok)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 *
 * @n: contient la donnée
 * @s: contient l'adresse
 * @b: doit contenir n
 *
 * Return: b (ok)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}

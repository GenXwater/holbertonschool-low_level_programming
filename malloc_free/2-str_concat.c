#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne à concaténer.
 * @s2: La deuxième chaîne à concaténer.
 * Return: Un pointeur vers la chaîne concaténée, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0; /** Longueur de s1 */
	int len2 = 0; /** Longueur de s2 */
	char *concat; /** Pointeur vers la chaîne concaténée */
	int i; /** Compteur pour parcourir la chaîne concaténée */

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}

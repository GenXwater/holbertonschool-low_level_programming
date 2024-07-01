#include "main.h"

/**
 * _strstr - Trouve la première occurrence de la sous-chaîne needle
 * dans la chaîne haystack.
 * @haystack: La chaîne principale dans laquelle chercher.
 * @needle: La sous-chaîne à trouver dans haystack.
 *
 * Return: Un pointeur sur le début de la sous-chaîne trouvée dans haystack,
 * ou NULL si la sous-chaîne n'est pas trouvée.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}

#include "main.h"

/**
 * vérif chq. pos. de haystack pr trver la 1ere occurrence de needle
 * 
 * @needle: contient world!
 * @haystack: contient hello world!
 * Faire une bouble haystack, suivi en dedant d'un autre needle
 * Faire comparer i + j à j, et si pas égale, alors break.
 *
 * Return 0 (ok)
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

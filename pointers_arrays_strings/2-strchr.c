#include "main.h"
#include <stddef.h>  /** Pour NULL */

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /** Retourne le pointeur vers la première occurrence de c dans s */
		}
		s++; /** Passe au caractère suivant dans la chaîne s */
	}

	return (NULL); /** Retourne NULL si c n'est pas trouvé dans s */
}


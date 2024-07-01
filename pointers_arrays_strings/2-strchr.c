#include "main.h"
#include <stddef.h>  /** Pour NULL */

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


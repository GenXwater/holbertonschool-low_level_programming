#include "main.h"

/**
 * strig_toupper - Convertit toutes les lettres min d'une chaîne en maj
 * @str: La chaîne à convertir.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */
char *strig_toupper(char *str)
{
	char *ptr = str; /** Pointeur pour parcourir la chaine */

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}

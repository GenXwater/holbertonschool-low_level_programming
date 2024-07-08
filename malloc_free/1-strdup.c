#include <stdlib.h>
#include <string.h>

/**
 * _strup - eturns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: la chaine à dupliquer
 * Return: un pointeur vers la chaine dupliquée
 * 	ou NULL si la mémoire disponible est insuffisante.
 */
char *_strdup(char *str)
{
	char *copie;
	unsigned int len = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	copie = malloc((len + 1) * sizeof(char));

	if (copie == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		copie[i] = str[i];
		i++;
	}

	/** Ajouter le caractère '\0' */
	copie[len] = '\0';

	/** Renvoi le pointuer vers la nouvelle chaine */
	return (copie);
}

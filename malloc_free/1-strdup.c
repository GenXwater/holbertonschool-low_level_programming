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
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	copie = malloc((len + 1) * sizeof(char));

	if (copie == NULL)
	{
		return (NULL);
	}

	strcpy(copie, str);

	return (copie);
}

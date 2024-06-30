#include "main.h"

/**
 * cap_string - Met en majuscule la première lettre de chaque mot d'une chaîne.
 * @str: La chaîne de caractères à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	/* Liste des séparateurs de mots */
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* Si le caractère actuel est un séparateur, on met capitalize_next à 1 */
		int j = 0;
		while (separators[j] != '\0')
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
			j++;
		}

		/* Si le caractère actuel doit être capitalisé */
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = 0;
		}
		/* Si le caractère actuel n'est pas une lettre */
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			capitalize_next = 0;
		}

		i++;
	}

	return str;
}

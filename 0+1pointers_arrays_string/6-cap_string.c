#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *s)
{
	int i, j;
	char n[] = " \t\n,;.!?\"(){}";
	int num_separators = 13; /** Nombre de séparateurs */

	for (i = 0; s[i] != '\0'; i++)
	{
		/** Si c'est le 1er caract et c'est une min, le convertir en maj */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		/** Parcourir tous les séparateurs */
		for (j = 0; j < num_separators; j++)
		{
			if (s[i] == n[j])
			{
				/** Si le caract suivant est une min, le convertir en maj */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}

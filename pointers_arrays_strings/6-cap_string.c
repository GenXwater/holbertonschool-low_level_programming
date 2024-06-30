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
		/** Si c'est le premier caractère et c'est une minuscule, le convertir en majuscule */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		/** Parcourir tous les séparateurs */
		for (j = 0; j < num_separators; j++)
		{
			if (s[i] == n[j])
			{
				/** Si le caractère suivant est une minuscule, le convertir en majuscule */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}

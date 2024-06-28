#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int start = 0;   /** Indice pour le début de la chaîne */
	int end = 0;     /** Indice pour la fin de la chaîne */
	char temp;       /** Variable temporaire pour échanger les caractères */

	/** Calculer la longueur de la chaîne */
	while (s[end] != '\0')
	{
		end++;
	}
	end--;  /** Réduire end de 1 pr qu'il pointe au der. char réel du string */

	/** Échange caractères du début et de end jusqu'à qu'ils se rencontrent */
	while (start < end)
	{
		temp = s[start];	/** Stocker le caractère de début dans temp */
		s[start] = s[end];	/** Remplacer le caractère de début par celui de fin */
		s[end] = temp;		/** Remplace caractère de fin par temp (char. de début) */
		start++;		/** Avancer vers le centre depuis le début */
		end--;			/** Avancer vers le centre depuis la fin */
	}
}


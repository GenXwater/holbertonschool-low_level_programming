#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne à concaténer.
 * @s2: La deuxième chaîne à concaténer.
 * @n: Le nombre de bytes à prendre de la deuxième chaîne.
 *
 * Description: Cette fonction concatène 2 chaînes de caractères en allouant
 *        de la mémoire pour une nouvelle chaîne de caractères. La nouvelle
 *        chaîne contient la première chaîne suivie des `n` premiers bytes
 *        de la deuxième chaîne, et est terminée par un caractère nul. Si
 *        `n` est supérieur ou égal à la longueur de la deuxième chaîne,
 *        la fonction utilise la totalité de la deuxième chaîne. Si l'une
 *        des chaînes est NULL, elle est traitée comme une chaîne vide.
 *        Si l'allocation de mémoire échoue, la fonction renvoie NULL.
 *
 * Return: Un pointeur vers la new chaîne concaténée, ou NULL si d'échec.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/** variables pour stocker les longeurs s1 et s2*/
	unsigned int len1 = 0, len2 = 0;

	char *result; /** Pointeur vers la new chaine concaténée */

	unsigned int i, j; /** création de boulcles av ces deux vrbl */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** Calcule les longueurs des chaines d'entrée */
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/** si n >= s2, utiliser la totalité de s2 */
	if (n >= len2)
		n = len2;

	/** alloue la mémoire pour la nouvelle chaine concaténée */
	result = malloc(len1 + n + 1);

	/** Vérifie si l'allocation de mémoire a réussi */
	if (result == NULL)
		return (NULL);

	/** copie les caractères de s1 dans la nouvelle chaine */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	/** copie les n premiers bytes de s2 dans la nouvelle chaine */
	for (j = 0; j < n; j++)
		result[len1 + j] = s2[j];
	/** ajoute un caractère \0 à la fin de la new string */
	result[len1 + n] = '\0';
	/** retourne un pointeur vers la new string concaténée */
	return (result);
}

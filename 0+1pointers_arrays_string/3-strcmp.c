/**
 * _strcmp - Compare two strings.
 * @s1: Première chaîne à comparer.
 * @s2: Deuxième chaîne à comparer.
 *
 * Return: La valeur 0 si les deux chaînes sont identiques,
 *         une valeur négative si s1 est inférieur à s2,
 *         une valeur positive si s1 est supérieur à s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

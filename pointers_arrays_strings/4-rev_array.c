/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Le tableau d'entiers à inverser.
 * @n: Le nombre d'éléments dans le tableau.
 *
 * Description: Cette fonction inverse l'ordre des éléments dans le tableau @a.
 *              Elle ne retourne rien.
 */
void reverse_array(int *a, int n)
{
	int start = 0;  /** Indice du début du tableau */
	int end = n - 1;  /** Indice de la fin du tableau */
	int temp;  /** Variable temporaire pour l'échange */

	/** Tant que start est inférieur à end, on échange les éléments */
	while (start < end)
	{
		/** Échange les éléments aux indices start et end */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/** Déplace les indices vers le centre du tableau */
		start++;
		end--;
	}
}

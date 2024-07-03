#include "main.h"

/**
 * _sqrt_helper - aide à trouver la racine carrée par essais successifs.
 * @n: le nombre dont on veut calculer la racine carrée.
 * @i: l'essai courant pour trouver la racine carrée.
 *
 * Return: la racine carrée de n, ou -1 si n n'a pas de racine carrée naturelle.
 */
int find_carre(int n, int i)
{
	if (i * i == n)
	{
		return (i); /* Trouvé la racine carrée naturelle */
	}
	if (i * i > n)
	{
		return (-1); /* Dépassement, pas de racine carrée naturelle */
	}
	return (find_carre(n, i + 1)); /* Appel récursif avec i incrémenté */
}


/**
 * _sqrt_recursion - retourne la racine carrée naturelle d'un nombre.
 * @n: le nombre dont on veut calculer la racine carrée.
 *
 * Return: la racine carrée de n, ou -1 si n n'a pas de racine carrée naturelle.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/** Return erreur si inférieur à 0 */
		return (-1);
	}
	/** Appel de la fonction auxiliaire i initialisé à 0 */
	return (find_carre(n, 0));
}

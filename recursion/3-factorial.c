#include "main.h"

/**
 * factorial - retourne le factoriel d'un nombre donné.
 * @n: le nombre dont on veut calculer le factoriel.
 *
 * Return: le factoriel de n
 * ou -1 si n est inférieur à 0 pour indiquer une erreur.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

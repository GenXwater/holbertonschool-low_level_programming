#include "main.h"

/**
 * factorial - function that returns the factoral of a given number
 *
 * @n: le nombre dont on veut retourner le factoriel
 *
 * return: le factoriel de n
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

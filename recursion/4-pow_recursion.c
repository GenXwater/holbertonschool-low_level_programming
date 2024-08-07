#include "main.h"

/**
 * _pow_recursion - return the power y at x
 *
 * @x: la base
 * @y: the power
 *
 * Return: -1 if y is lower 0, else return x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

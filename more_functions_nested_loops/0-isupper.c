#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase charactere
 * @c: the character to be checked
 *
 * Return: 1 if c is  uppoercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

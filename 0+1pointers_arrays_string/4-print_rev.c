#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: is a pointer
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int revers, longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}

	for (revers = longueur; revers >= 0; revers--)
	{
		_putchar(s[revers]);
	}
	_putchar('\n');
}

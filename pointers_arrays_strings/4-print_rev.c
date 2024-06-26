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
	int longueur = 0;
	int revers;

	char *start = s;


	while (*s != '\0')
	{
		longueur++;
		s++;
	}

	s = start;

	for (revers = longueur - 1; revers >= 0; revers--)
	{
		_putchar(s[revers]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed every other character
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, longueur = 0;
	char *temp = str;

	while (*temp != '\0')
	{
		longueur++;
		temp++;
	}

	for (i = 0; i < longueur; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

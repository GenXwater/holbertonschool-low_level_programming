#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed half of a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, start, length = 0;

	/** clacul la longueur du string */
	while (str[length] != '\0')
	{
		length++;
	}

	/** détermination du point de départ de la 2nd moitié */
	start = (length + 1) / 2;

	/** Affichage de la 2nd moitié du string */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

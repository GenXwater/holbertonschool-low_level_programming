#include "main.h"

/**
 * _puts - prints a  string, followed by a new line, to sdtout
 *@str: Pointeur vers la chaine de caractères à afficher.
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

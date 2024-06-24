#include "main.h"
#include <stdio.h>

/**
 * print_line - Imprime une ligne droite avec le caractère '_'
 * @n: Nombre de fois que le caractère _ doit être imprimé
 */

void print_line(int n)
{	
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}

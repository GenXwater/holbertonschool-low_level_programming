#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Printf
 *
 * Return: 0 (ok)
 */

int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}


#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 * Return: 0 (ok)
 */

void more_numbers(void)
{
	int serie, n;

	for (serie = 0; serie < 10; serie++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar ('0' + n / 10);
			}
			_putchar ('0' + n % 10);
		}
		_putchar ('\n');
	}
}

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 * Return: 0 (ok)
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		if (n < 10)
		{
			_putchar ('0' + n);
		}
		
		else
		{
			_putchar ('0' + n / 10);
			_putchar ('0' + n % 10);

		}

	}
	_putchar ('\n');
}

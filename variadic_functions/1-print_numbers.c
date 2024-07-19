#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 *             If separator is NULL, don’t print it.
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(op);
}

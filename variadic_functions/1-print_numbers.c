#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 *             If separator is NULL, don’t print it.
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);

	if (separator == NULL)
		separator = " ";

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(op, int), separator);
	}
	printf("%d\n", va_arg(op, int));
	va_end(op);
}

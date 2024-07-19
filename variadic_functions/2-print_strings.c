#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 *             If separator is NULL, don’t print it.
 * @n: the string of integers passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;

	va_start(op, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(op, char *));

		if (i < n - 1) {
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(op);
}

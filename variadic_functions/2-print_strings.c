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
	char *str;


	va_start(op, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(op);
}

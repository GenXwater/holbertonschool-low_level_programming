#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - variadic function that prints strings from different
 * types using switch for converting them fr printing, followed by a new line
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arglist;
	int i = 0, j = 0;
	char *chain, type;

	va_start(arglist, format);
	while (format && format[i])
	{
		type = format[i];
		if (type == 'c' || type == 'i' || type == 'f' || type == 's')

		{
			if (j > 0)
				printf(", ");

			switch (type)
			{
				case 'c':
					printf("%c", va_arg(arglist, int));
					break;
				case 'i':
					printf("%d", va_arg(arglist, int));
					break;
				case 'f':
					printf("%f", va_arg(arglist, double));
					break;
				case 's':
					chain = va_arg(arglist, char*);
					{
						printf("%s", chain ? chain : "(nil)");
					}
					break;
				default:
					break;
			}
			j++;
		}
		i++;
	}
	va_end(arglist);
	printf("\n");
}

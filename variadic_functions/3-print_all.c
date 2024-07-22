#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *string, *sep;

	va_start(args, format);
	while (format && format[i])
	{
		sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%i", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";

				printf("%s", string);
				break;

			default:
				sep = "";
				break;
		}
		if (format[i + 1] != '\0')
			printf("%s", sep);
		i++;
	}
	va_end(args);
	printf("\n");
}

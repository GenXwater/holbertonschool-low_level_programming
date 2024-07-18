#include <stdarg.h>

/*
 * sum_them_all - for addition
 * @n: arguments indéfini
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum = 0;
	unsigned int i;

	va_start (op, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg (op, int);
	}
	
	va_end (op);

	return (sum);
}

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
	char (c);
	int (n);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	for (n = '0'; n <= '9'; n++)
		putchar(n);
			putchar('\n');
	
	return (0);
}

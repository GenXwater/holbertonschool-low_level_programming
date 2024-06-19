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
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

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
	int s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
		{
			if (s != '9')
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

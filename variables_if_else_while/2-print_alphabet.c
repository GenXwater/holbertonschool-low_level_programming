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
	char (first_letter_low);

	for (first_letter_low = 'a'; first_letter_low <= 'z'; first_letter_low++)

		putchar(first_letter_low);
	putchar('\n');

	return (0);
}

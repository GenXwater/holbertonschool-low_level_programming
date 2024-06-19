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
	int n;
	int last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %d and is greater than %d\n", n, n % 10);

	else if (n % 10 == 0)
		printf("Last digit of %d and is %d\n", n, n % 10);

	else
		printf("Last digit of %d and is less than %d and not 0\n", n, n % 10);

	return (0);
}

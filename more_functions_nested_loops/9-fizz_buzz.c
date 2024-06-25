#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *
 *
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n % 3 == 0 && n != 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0 && n != 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}

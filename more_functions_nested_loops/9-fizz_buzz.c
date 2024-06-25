#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 100, replacing multiples of 3 with "Fizz"
 *              and multiples of 5 with "Buzz".
 *
 * Return: Always 0 (ok)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n != 0 && n % 5 == 0 && n != 0)
		{
			printf("FizzBuzz ");
		}		
		else if (n % 3 == 0 && n != 0)
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

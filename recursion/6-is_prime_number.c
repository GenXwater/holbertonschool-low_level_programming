#include "main.h"

/**
 * check_prime - Helper function to check if number is prime.
 * @n: The number to check.
 * @i: The current divisor to test
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, n / 2));
}

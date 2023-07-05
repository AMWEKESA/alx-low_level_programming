#include "main.h"


/**
 * is_prime_number - prints a string recursively
 * @n: number to be checked
 * Return: return 1 if prie else 0
 */

int checkPrime(int n, int div);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (checkPrime(n, 2));
	}
}

/**
 * checkPrime - to check if n is a prime
 * @n: number to be checked
 * @div: current divisor to check divisibility
 * Return: 1 if the number is prime, 0 otherwise
 */
int checkPrime(int n, int div)
{
	if (div >= n)
	{
	return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
		return (checkPrime(n, div + 1));
}

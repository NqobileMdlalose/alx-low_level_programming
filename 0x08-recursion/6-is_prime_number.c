#include "main.h"

/**
 * prime_recursive - returns 1 if prime number
 * @n: integer
 * @i: integer
 * Return: integer
 */
int  prime_recursive(int n, int i)
{
	if (i <= 2)
	{
		return(0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	if (n / i == 1)
	{
		return (1);
	}
	return (prime_recursive(0, i + 1));
}

/**
 * is_prime_number - returns 1 if prime number
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n != 1)
	{
		return (1);
	}
	return (prime_recursive(n, n - 1));
}

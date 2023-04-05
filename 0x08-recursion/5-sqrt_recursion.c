#include "main.h"

/**
 * sqrt_func - recursion function
 * @n: integer
 * @bot: integer
 * @top: integer
 * Return: int
 */
int sqrt_func(int n, int bot, int top)
{
	int mid;

	mid = (top + bot) / 2;

	if (mid == bot)
	{
		return (mid);
	}
	if (mid * mid < n)
	{
		return (sqrt_func(n, mid, top));
	}
	return (sqrt_func(n, bot, mid));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_func(n, 0, n + 1));
}

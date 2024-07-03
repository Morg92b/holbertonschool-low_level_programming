#include "main.h"

/**
 *is_prime_runtime- function performs the main primality check using recursion
 *@n: it is the value
 *@x: it is the divider
 *Return: result
 */

int is_prime_runtime(int n, int x)
{
	if ((x * x) > n)
	{
		return (1);
	}
	if ((n % x) == 0)
	{
		return (0);
	}
	return (is_prime_runtime(n, x + 1));
}

/**
 *is_prime_number- returns 1 if the input integer is a prime number
 *@n: it is the value
 *Return: result
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_runtime(n, 2));
}

#include "main.h"

/**
 *_square_i- it is the recurses find the natural
 *@a: it is the variable
 *@i: it is the square
 *Return: result
 */

int _square_i(int a, int i)
{
	if (i * i == a)
	{
		return (i);
	}

	if (i > a / 2)
	{
		return (-1);
	}
	else
	{
		return (_square_i(a, i + 1));
	}
}

/**
 * _sqrt_recursion -returns the natural square
 * @n: number calculate
 *Return: resultat
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
		return (_square_i(n, 1));
}

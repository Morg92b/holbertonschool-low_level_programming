#include "main.h"

/**
 *_pow_recursion- Calcul the value of raised to the power
 *@x: it is the base
 *@y: it is the exponent
 *Return: the result of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

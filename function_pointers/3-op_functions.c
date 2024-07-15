#include "3-calc.h"

/**
 *op_add - addition of a and b
 *@a: first value
 *@b: second value
 *Return: addition of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtraction of a and b
 *@a: first value
 *@b: second value
 *Return: subtraction of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication of a and b
 *@a: first value
 *@b: second value
 *Return: multiplication of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of a and b
 *@a: first value
 *@b: second value
 *Return: division of a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulo of a and b
 *@a: first value
 *@b: second value
 *Return: modulo of a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

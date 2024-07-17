#include "variadic_functions.h"

/**
 *sum_them_all - that returns the sum of all its parameters
 *@n: the number of integers passed to the function
 *Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}


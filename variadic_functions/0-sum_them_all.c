#include "variadic_functions.h"

/**
 *sum_them_all - that returns the sum of all its parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int index = n;
	va_list ap;
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; index >= 0; index = va_arg(ap,const unsigned int))
		va_end(ap);
	return (index);
}


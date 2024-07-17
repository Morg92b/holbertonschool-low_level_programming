#include "variadic_functions.h"

/**
 *print_numbers - that prints numbers, followed by a new line
 *@separator: is the string to be printed between numbers
 *@n: is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	if (separator != NULL)
	{
		printf("%s", separator);
	}

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int);
	}
	printf("\n");
	va_end(ap);
}


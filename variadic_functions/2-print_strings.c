#include "variadic_functions.h"

/**
 *print_strings - that prints strings, followed by a new line
 *@separator: is the string to be printed between numbers
 *@n: is the number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char*);

	if (str == NULL)

		printf("(nil)");
	else
		printf("%s", str);

	if (separator != NULL && index < n - 1)

		printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);

}






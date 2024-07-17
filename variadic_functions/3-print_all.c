#include "variadic_functions.h"

/**
 * print_char - prints character
 * @ap: it is variable arguments
 */

void	print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints float number
 * @ap: it is variable arguments
 */

void	print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_int - prints integer
 * @ap:it is variable arguments
 */

void	print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_string - prints string
 * @ap: it is variable arguments
 */

void	print_string(va_list ap)
{
	char	*s = va_arg(ap, char*);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void	print_all(const char * const format, ...)
{
	format_specifier_t specifiers[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list ap;
	int	index = 0, j;
	char	*separator = "";

	va_start(ap, format);
	while (format && format[index])
	{
		j = 0;
		while (specifiers[j].specifier)
		{
			if (format[index] == specifiers[j].specifier)
			{
				printf("%s", separator);
				specifiers[j].print_func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		index++;
	}
	va_end(ap);
	printf("\n");
}

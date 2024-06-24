#include "main.h"

/**
 * print_numbers- function that prints the numbers
 *
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n++);
	}
	_putchar('\n');
}

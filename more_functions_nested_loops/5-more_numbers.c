#include "main.h"

/**
 *more_numbers- function that prints 10 times the numbers
 */

void more_numbers(void)
{
	int num_a = 0;
	int num_b = 0;

	for (num_a = 0; num_a <= 9; num_a++)
	{
	for (num_b = 0; num_b <= 14; num_b++)
	{
	if (num_b > 9)
	{
		_putchar (1 + '0');
	}
		_putchar(num_b % 10 + '0');
	}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_binary - the binary representation of a number
 * @n: function that will convert and display in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @r: last digit 
 * @a: this is a resultat of operation 
 */

int print_last_digit(int r)
{
	int a;

	a = r % 10;
	if (a < 0)
		a = -a;
	_putchar (a + '0');

	return (a);
}

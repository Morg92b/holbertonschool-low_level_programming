#include "main.h"

/**
 * print_alphabet_x10 - i print x10 alphabet
 * Return:void
 */

void print_alphabet_x10(void)
{
	int l = 0;

	while (l <= 9)

	{
		char c = 'a';

		while (c <= 'z')

		_putchar(c++);

		_putchar('\n');
		(l++);
	}
}

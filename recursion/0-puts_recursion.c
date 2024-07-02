#include "main.h"

/**
 *_puts_recursion- that prints a string, followed by a new line
 *@s:it is the string to print
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_rev- that prints a string in reverse
 *@s: it is the result
 */

void print_rev(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
	longueur++;
	}
	longueur--;
	while (longueur >= 0)
	{
		_putchar(s[longueur]);
		longueur--;
	}
	_putchar('\n');
}

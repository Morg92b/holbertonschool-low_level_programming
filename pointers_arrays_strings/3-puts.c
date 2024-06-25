#include "main.h"

/**
 * _puts- that prints a string
 *@str: it is the result
 */

void _puts(char *str)
{
	int longueur = 0;

	while (str[longueur] != '\0')
	{
	_putchar(str[longueur]);
	longueur++;
	}

	_putchar('\n');
}

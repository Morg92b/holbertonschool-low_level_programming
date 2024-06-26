#include "main.h"

/**
 *
 *
 */

void puts_half(char *str)
{
	int longueur = 5;

	while (str[longueur] != '\0')
	{
	_putchar(str[longueur]);
	longueur++;
	}

	_putchar('\n');
}


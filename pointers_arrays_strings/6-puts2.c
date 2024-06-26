#include "main.h"

/**
 *puts2- function that prints every other character of a string
 *@str: it is a string
 */

void puts2(char *str)
{
	int index = 0;
	int line = 0;

	while (str[line] != '\0')
	{
		line++;
	}
	while (index < line && str[index] != '\0')   /*  utilise boucle for */
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}

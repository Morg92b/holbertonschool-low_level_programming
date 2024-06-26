#include "main.h"

/**
 *puts_half- function that prints half of a string
 *@str: it is the string
 */

void puts_half(char *str)
{
	int index = 0;
	int line = 0;

	while (str[line] != '\0')
	{
		line++;
	}
	if (line % 2 == 0)
	{
		index = line / 2;
	}
	else
	{
		index = (line / 2) + 1;
	}
	while (index < line)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}


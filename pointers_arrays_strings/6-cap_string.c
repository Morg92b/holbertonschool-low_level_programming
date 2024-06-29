#include "main.h"
#include <ctype.h>

/**
 *cap_string- function that capitalizes all words of a string
 *@p: pointer of string
 *Return: p
 */

char *cap_string(char *p)
{
	int index = 0;

	while (p[index] != '\0')
	{
		if ((index == 0 || p[index - 1] == ' ' || p[index - 1] == '\t' ||
		p[index - 1] == '.' || p[index - 1] == '\n')
		&& p[index] >= 'a' && p[index] <= 'z')

		p[index] -= 32;
		index++;
	}
	return (p);
}


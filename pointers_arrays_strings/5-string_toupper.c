#include "main.h"

/**
 *string_toupper- function that changes all lowercase letters
 *			of a string to uppercase
 *@p: it is the pointer
 *Return: p
 */

char *string_toupper(char *p)
{
	int index = 0;

	while (p[index] != '\0')
	{

		if (p[index] >= 'a' && p[index] <= 'z')

		p[index] -= 32;
		index++;
	}
	return (p);
}

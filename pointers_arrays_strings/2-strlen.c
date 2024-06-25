#include "main.h"

/**
 *_strlen- function that returns the length of a string.
 *@s: it is a pointer of string
 *Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}


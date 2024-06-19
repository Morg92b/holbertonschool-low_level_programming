#include "main.h"

/**
 * _islower - i use for checks lowercase character
 * @c: The character to be checked
 * Return:1 and 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

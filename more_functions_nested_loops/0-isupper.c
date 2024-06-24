#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: it is the value that determines
 *Return:1 and 0
 */



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

#include "main.h"

/**
 *_memset- that fills memory with a constant byte
 *@n: it is the valor octets of memory
 *@b: it is the constant value of memory
 *@s: it is the pointer
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)

		s[index] = b;
	return (s);
}

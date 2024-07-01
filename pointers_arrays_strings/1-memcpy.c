#include "main.h"

/**
 *_memcpy- that copies memory area
 *@src: it is the source
 *@dest: it is the destination
 *@n: it is the length
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}




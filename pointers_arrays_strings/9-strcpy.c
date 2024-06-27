#include "main.h"
#include <stdio.h>

/**
 *_strcpy- function that copies the string pointed
 *@dest: it is the value cp
 *@src: it is the value
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index= 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}





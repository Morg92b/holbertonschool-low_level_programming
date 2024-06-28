#include "main.h"

/**
 *_strcat- function that concatenates two strings
 *@dest: it is the destination of the source
 *@src: it is the source
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';

	return (dest);
}


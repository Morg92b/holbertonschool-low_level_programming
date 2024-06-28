#include "main.h"

/**
 * _strncat- function that concatenates two strings
 *@dest: it is the destination
 *@src: it is the source
 *@n:it is index
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i = 0;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && i < n)
	{
		i++;
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}

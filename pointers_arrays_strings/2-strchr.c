#include "main.h"

/**
 *_strchr- that locates a character in a string
 *@s:it is the pointer
 *@c:it is the character
 *Return: s & 0
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}


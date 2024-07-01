#include "main.h"

/**
 *_strspn- function that gets the length of a prefix substring
 *@s: it is a pointer of first string
 *@accept: it is the accept string
 *Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}

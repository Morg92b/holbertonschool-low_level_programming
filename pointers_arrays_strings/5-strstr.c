#include "main.h"

/**
 *_strstr- function that locates a substring
 *@haystack: it is the full string
 *@needle: it is the pointer to search in haystack
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')

		return (haystack);

		haystack++;
	}
	return ('\0');
}

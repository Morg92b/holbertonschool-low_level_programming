#include "main.h"
/**
 *rev_string- function that reverses a string.
 *@s: it is a string
 */

void rev_string(char *s)
{
	char *begin = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;
	}
}

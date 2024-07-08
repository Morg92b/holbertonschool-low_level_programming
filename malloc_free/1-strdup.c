#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function that returns pointer to a newly allocated space in memory
 *@str: it is the string
 *Return: s it is the string duplicate
 */

char *_strdup(char *str)
{
	char *s = 0;
	int length = 0;
	int index = 0;

	while (str[length] != '\0')
		length++;

	s = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);

	for (; index <= length; index++)
		s[index] = str[index];

	return (s);
}



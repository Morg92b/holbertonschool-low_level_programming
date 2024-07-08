#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: result it is s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int index;
	int length_1 = 0;
	int length_2 = 0;
	char *result;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	while (s1[length_1] != '\0')
		length_1++;
	while (s2[length_2] != '\0')
		length_2++;

	result = malloc(sizeof(char) * (length_1 + length_2 + 1));

	if (result == NULL)

		return (NULL);

	for (index = 0; index < length_1; index++)
		result[index] = s1[index];

	for (index = 0; index < length_2; index++)
		result[length_1 + index] = s2[index];

	result[length_1 + length_2] = '\0';

	return (result);
}

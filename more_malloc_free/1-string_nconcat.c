#include "main.h"

/**
 *string_nconcat - 
 *@s: first string
 *@s2: second string
 *@n:
 *Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] && s2[index]; index++)
		length++;

	result = malloc(sizeof(char) * (length + 1));

	if (result == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		result[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		result[length++] = s2[index];

	result[length] = '\0';

	return (result);
}



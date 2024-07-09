#include "main.h"

/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: it is the maximum number of bytes of s2 to concatenate
 *Return: result or if fails NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length_1 = 0, length_2 = 0, length_total;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length_1 = 0; s1[length_1]; length_1++)
		;

	for (length_2 = 0; s2[length_2]; length_2++)
		;
	if (n > length_2)
		n = length_2;

	length_total = length_1 + n;

	result = malloc(sizeof(char) * (total_length + 1));

	if (result == NULL)
		return (NULL);

	for (index = 0; index < length_1; index++)
		result[index] = s1[index];

	for (index = 0; index < n; index++)
		result[length_1 + index] = s2[index];

	result[length_1 + n] = '\0';

	return (result);
}

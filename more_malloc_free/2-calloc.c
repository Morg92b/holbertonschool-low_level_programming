#include "main.h"

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in array
 *@size: size of nmemb
 *Return: ptr or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < nmemb * size; index++)
		ptr[index] = 0;
	return (ptr);
}

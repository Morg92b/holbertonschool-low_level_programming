#include "main.h"

/**
 *malloc_checked - allocates memory using malloc
 *@b: it is the size of memory
 *Return: ptr or exit(98)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}


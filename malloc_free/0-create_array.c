#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *@size: size of table
 *@c: it is valor which print
 *Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)

		return (NULL);

	if (array == 0)

		return (NULL);

	for (index = 0; index < size ; index++)
	{
		array[index] = c;
	}
	return (array);

}


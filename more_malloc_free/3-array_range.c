#include "main.h"

/**
 *array_range - that creates an array of integers
 *@min: minimum value of integer
 *@max: maximum value of integer
 *Return: array or NULL if fail
 */

int *array_range(int min, int max)
{
	int index = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}

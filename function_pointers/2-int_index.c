#include "function_pointers.h"

/**
 *int_index - functions that searches for integer.
 *@array: array of integers
 *@size: size of array
 *@cmp: is a pointer to the function to be used to compare values
 *Return: -1 if no element matches & if size <= 0 otherwise return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		return (index);
	}

	return (-1);
}

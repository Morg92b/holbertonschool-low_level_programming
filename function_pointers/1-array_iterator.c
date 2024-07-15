#include "function_pointers.h"


/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: it is the pointer to array
 *@size: is the size of the array
 *@action: is a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)

	(*action)(array[index]);
}

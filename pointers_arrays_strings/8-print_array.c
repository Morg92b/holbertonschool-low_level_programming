#include "main.h"
#include <stdio.h>

/**
 *print_array- function that prints n
 *@a: it is pointer of the array
 *@n: it is number of elements of the array
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n ; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

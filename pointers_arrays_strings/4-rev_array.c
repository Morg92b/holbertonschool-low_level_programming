#include "main.h"

/**
 *reverse_array- function that reverses the content of an array of integers
 *@a:it is the value
 *@n: it is the lenght
 */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;
	int temp;

	while (begin < end)
	{
		temp = a[begin];
		a[begin] = a[end];
		a[end] = temp;
		begin++;
		end--;
	}
}

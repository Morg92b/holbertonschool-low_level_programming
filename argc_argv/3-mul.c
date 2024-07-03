#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints the number of arguments
 *@argc: argument count
 *@argv:array of pointers to strings
 *Return: 0
 */

int main(int argc, char **argv)
{
	int mult_1 = 0, mult_2 = 0, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		mult_1 = atoi(argv[1]);
		mult_2 = atoi(argv[2]);
		result = (mult_1 * mult_2);
		printf("%d\n", result);
	}
	return (0);
}


#include <stdio.h>
#include <stdlib.h>

/**
 *main- prints the number of arguments
 *@argc: argument count
 *@argv:array of pointers to strings
 *Return: 1 if result 0 or error and return 0 if result is > 0
 */

int main(int argc, char **argv)
{
	int index_1;
	int index_2;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
			return (1);
	}
	for (index_1 = 1; i < argc; i++)
	{
		for (index_2 = 0; argv[index_1][index_2] != '\0'; index_2++)

			if (argv[index_1][index_2] < '0' || argv[index_1][index_2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		result += atoi(argv[index_1]);
	}
	printf("%d\n", result);
	return (0);
}

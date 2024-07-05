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
	int n;
	int number;
	int result = 0;

	for (n = 1; n < argc; n++)
	{
		for (number = 0; argv[n][number]; number++)
		{
			if (argv[n][number] < '0' || argv[n][number] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[n]);
	}

	printf("%d\n", result);
	return (0);
}

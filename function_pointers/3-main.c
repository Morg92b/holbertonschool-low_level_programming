#include "3-calc.h"

/**
 * main - it is the function on main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];

	if (*operator != '+' && *operator != '-' && *operator != '*'
			&& *operator != '/' && *operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = (*get_op_func(operator))(num1, num2);
	printf("%d\n", calc);

	return (0);
}

#include "3-calc.h"

/**
 *get_op_func - select the correct function for executer
 *@s: this is operator
 *Return: pointer to function correctly or NULL if is not valid
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}




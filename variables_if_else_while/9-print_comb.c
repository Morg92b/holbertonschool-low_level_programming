#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return:0
 */

int main(void)
{
	char n = '0';

	while (n <= '9')

	{
		if (n <= '9')
		{
				putchar(',');
				putchar(' ');
				putchar(n++);
		}
	}
	putchar('\n');

	return (0);
}

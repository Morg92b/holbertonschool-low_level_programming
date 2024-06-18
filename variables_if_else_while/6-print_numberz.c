#include <stdio.h>

/**
 * main - i print number with putchar
 * Return:0
 */

int main(void)
{
	char n = '0';

	while (n <= '9')
	putchar(n++);
	putchar('\n');

	return (0);
}


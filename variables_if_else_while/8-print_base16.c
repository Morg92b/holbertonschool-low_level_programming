#include <stdio.h>

/**
 * main - i prints alphabet and number
 * Return:0
 */

int main(void)
{
	char n = '0';

	while (n <= '9')

		putchar(n++);
	{
		char c = 'a';
			while (c <= 'f')
			putchar(c++);
			putchar('\n');
	}

	return (0);
}

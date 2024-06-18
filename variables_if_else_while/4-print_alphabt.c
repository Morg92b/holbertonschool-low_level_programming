#include <stdio.h>

/**
 * main - i use condition 'if' for except 'q' and 'e'
 * Return:0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		if (c == 'q')
			(c++);
		if (c == 'e')
			(c++);
		putchar(c++);
	}
	putchar('\n');
	return (0);
}

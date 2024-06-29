#include "main.h"

/**
 *leet- encodes a string into 1337
 *@p: pointer of the string
 *Return: p
 */

char *leet(char *p)
{
	int index = 0;
	int index_2;
	char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (p[index])
	{
		for (index_2 = 0; index_2 <= 7; index_2++)
		{
			if (p[index] == c[index_2] || p[index] - 32 == c[index_2])
				p[index] = index_2 + '0';
		}

		index++;
	}
	return (p);
}

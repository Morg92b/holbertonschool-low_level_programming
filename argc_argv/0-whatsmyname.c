#include <stdio.h>
#include <stdlib.h>

/**
 *main- parameter argc & argv
 *@argc:counting the number of command line arguments passed to the program
 *@argv:array of pointers to strings
 *Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

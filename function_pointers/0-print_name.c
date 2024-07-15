#include "function_pointers.h"

/**
 *print_name - that prints a name
 *@name: it is the pointer to name
 *@f: it is pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

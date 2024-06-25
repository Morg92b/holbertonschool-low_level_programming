#include "main.h"

/**
 * swap_int- function that swaps the values
 *@a: valor of b
 *@b: valor of temporaire
 */

void swap_int(int *a, int *b)
{
	int temporaire = *a;
	*a = *b;
	*b = temporaire;
}

#include "dog.h"
#include <stdio.h>

/**
 *free_dog -  function that frees dogs
 *@d:
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}

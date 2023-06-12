#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dog struct
 * @d: dog to free
 */

void free_dog(dog_t *d)
{

	if (d == NULL)
		return;
	free((*d).name);
	free(d);
	free((*d).owner);
}

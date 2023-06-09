#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*_calloc - allocates memory for an array
*@nmemb: number of elements
*@size: size of element in bytes
*Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	/*nmemb = size;*/

	/*while (nmemb--)*/
	/*p[nmemb] = 0;*/

	return ((void *)p);

}

#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (r);
}

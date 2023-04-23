#include <string.h>
#include <stdlib.h>

/**
* *_memset - fills memory with a concstant byte
* @s: pointer to the object or block of memory that needs to be set
* @b: value that is copied, converted to unsigned int n
* @n: number of bytes to be set
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

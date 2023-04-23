#include <string.h>

/**
* *_memcpy - copies memory area
* @dest: pointer to the destination array where the content is to be copied
* @src: pointer to the source of data to be copied
* @n: the number of bytes to be copied
* Return:
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (dest);
}

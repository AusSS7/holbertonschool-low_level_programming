#include <string.h>
#include <stdlib.h>

/**
* *_strncat - concatenates two strings
* @dest: string 1 value
* @src: string 2 value
* @n: n bytes from src
* Return: string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, dest_len;

	dest_len = strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	dest[dest_len + a] = '\0';
	return (dest);
}

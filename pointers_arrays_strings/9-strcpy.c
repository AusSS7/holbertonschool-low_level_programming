#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* *_strcpy - copies the string pointed to by src
* @dest: string value destination
* @src: string value source
* Return: the Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int a;
	int len;

	len = strlen(src);
	for (a = 0; a <= len ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

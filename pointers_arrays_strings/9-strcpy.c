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
int a, len;

len = strlen(src);
for (a = 0; a < len &&  src[a] != '\0'; a++)
dest[a] = src[a];
for (; a < len; a++)
dest[a] = '\0';

return (dest);

}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* *_strcat - concatenates two strings
*@dest: copied or destination string
*@src: source string
*Return: dest value
*/

char *_strcat(char *dest, char *src)
{
	int a, dest_len;

	dest_len = strlen(dest);
	for (a = 0; src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	dest[dest_len + a] = '\0';
	return (dest);
}

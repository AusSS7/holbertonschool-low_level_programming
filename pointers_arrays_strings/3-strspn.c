#include <string.h>

/**
* _strspn - gets the length of a prefix substring
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in str1.
* Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;

	if ((s == NULL) || (accept == NULL))
		return (a);
	while (*s && strchr(accept, *s++))
	{
		a++;
	}
	return (a);
}

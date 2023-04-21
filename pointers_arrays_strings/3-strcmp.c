#include <string.h>
#include <stdlib.h>

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: 0 or Result
*/

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	if (result == 0)
		return (0);
	else
		return (result);

}

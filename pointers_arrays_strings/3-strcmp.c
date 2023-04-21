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
	int a;

	a = 0;
	while (s1[a] == s2[a])
	{
       		if (s1[a] == '\0' || s2[a] == '\0')
			break;
		a++;
	}
	if (s1[a] == '\0' && s2[a] == '\0')
		return (0);
	else
		return (-1);

}

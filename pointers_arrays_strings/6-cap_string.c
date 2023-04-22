#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
* *cap_string - capitalizes all words of a string
* @str: point variable string
* Return: 0
*/

char *cap_string(char *str)
{
	int a;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a - 1] == 32)
		{
			if (str[a] >= 97 && str[a] <= 122)
			{
				str[a] = str[a] - 32;
			}
		}
	}
	return (str);
}

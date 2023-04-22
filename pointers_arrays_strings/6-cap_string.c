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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		else if (str[i - 1] == ' ')
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i - 1] >= 9 && str[i - 1] <= 10)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}

#include <string.h>
#include <stdlib.h>

/**
* *cap_string - capitalizes all words of a string
* @str: point variable string
* Return: 0
*/

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0)
		{
			if (str[a] >= 97 && str[a] <= 122)
				str[a] = str[a] - 32;
			continue;
		}
		if (str[a] == ' ')
		{
			a++;
			if (str[a] >= 97 && str[a] <= 122)
				str[a] = str[a] - 32;
			continue;
		}
		else
		{
			if (str[a] >= 65 && str[a] <= 90)
				str[a] = str[a] + 32;
		}
	}
	return (0);
}

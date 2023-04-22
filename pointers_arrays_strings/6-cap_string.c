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
	char *r = str;
	int b;
	char a[] = " \t\n,.!?\"(){}";
	int cap;

	cap = 1;
	while (*str)
	{
		if (cap && *str >= 97 && *str <= 122)
			*str = *str - 32;
		cap = 0;
		for (b = 0; b < 12; b++)
		{
			if (*str == a[b])
				cap = 1;
		}
		str++;
	}
	return (r);
}

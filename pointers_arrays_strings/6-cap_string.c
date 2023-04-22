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
	int i;
	int b;
	char a[] = " \t\n,.!?\"(){}";
	int cap;

	cap = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		cap = 0;
		for (b = 0; b < 12; b++)
		{
			if (str[b] == a[i])
				cap = 1;
		}
		str++;
	}
	return (r);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
*_atoi - convert a string to an integer
*@s: value of the character
*Return: Always 0
*/

int _atoi(char *s)
{
	int i;
	int num;
	int a;
	int status;

	status = 0;
	a = 1;
	num = 0;
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
       		{
            		a = a * -1;
            		s++;
        	}
       		else if (*s == '+')
        	{
            		a = a * -1;
            		s++;
        	}
	}
	for(i = 0; s[i] != '\0'; i++)
	{
		if (status == 1)
		{
			break;
		}
		while (isdigit(s[i]))
		{
			if (s[i] >= 48 && s[i] <= 57)
			{
				num = num * 10 + (s[i] - 48);
			}
			if (isdigit(s[i + 1]))
			{
				status = 1;
			}
		i++;
		}
	}
	return (num * a);
}

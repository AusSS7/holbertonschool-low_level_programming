#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts2 - prints every other character of a string
*@str: value of the string
*Return: None
*/

void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
{
printf("%c", str[a]);
}
}
printf("\n");
}

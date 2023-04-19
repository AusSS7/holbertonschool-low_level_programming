#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - prints half of a string
*@str: Pointer variable
*Return: None
*/

void puts_half(char *str)
{
  int a, b, c, s;
s = strlen(str);
a = (s - 1) / 2;
c = s / 2;
for (b = 0; b <= s; b++)
{
if (b % 2 == 0)
{
if (b > c)
{
printf("%c", str[b]);
}
}
else if (b % 2 != 0)
{
if (b > a)
{
printf("%c", str[b]);
}
}
}
printf("\n");
}

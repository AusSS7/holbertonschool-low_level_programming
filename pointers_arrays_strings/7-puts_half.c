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
b = 0;
while (b < s)
{
if (b % 2 == 0)
{
if (b > c)
{
_putchar(*(str + b));
}
}
else
{
if (b > a)
{
_putchar(*(str + b));
}
}
b++;
}
_putchar('\n');
}

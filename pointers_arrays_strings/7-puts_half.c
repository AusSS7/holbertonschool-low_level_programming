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
int a, b, s;
s = strlen(str);
a = (s / 2) + 1;

for (b = 0; b <= s; b++)
{
  if (b >= a)
    {
  printf("%c", str[b]);
    }
}
 printf("\n");
}

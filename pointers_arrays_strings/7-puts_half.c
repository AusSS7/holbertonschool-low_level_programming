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
b = s / 2;
a = b;
for (b = a; b <= s; b++)
{
  printf("%c", str[b]);
}
 printf("\n");
}

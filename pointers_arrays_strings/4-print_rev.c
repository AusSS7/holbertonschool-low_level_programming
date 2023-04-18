

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - prints a string in reverse
* @s: String value
* Return: None
*/

void print_rev(char *s)
{
int i, b, count;
char rev[1000];
count = 0;

while (s[count] != '\0')
{
count++;
}
b = count - 1;
for (i = 0; i < count; i++)
{
rev[i] = s[b];
b--;
}
printf("%s", rev);
printf("\n");
}

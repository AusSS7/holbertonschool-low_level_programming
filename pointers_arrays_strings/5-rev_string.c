#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
*@s: value of string
*Return: None
*/

void rev_string(char *s)
{
int a, count;
char *begin, *end, temp;
count = 0;
begin = s;
end = s;
while (*(s + count) != '\0')
count++;
for (a = 0; a < count - 1; a++)
end++;
for (a = 0; a < count / 2; a++)
{
temp = *end;
*end = *begin;
*begin = temp;
begin++;
end--;
}
}

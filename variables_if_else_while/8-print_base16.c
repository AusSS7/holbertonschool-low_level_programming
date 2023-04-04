#include <stdio.h>
/**
*main - prints all the number of base 16 in lowercase
*
*Return: Always 0
*/
int main(void)
{
char *p;

p = "0123456789abcdef";
while (*p != 0)
{
putchar(*p);
p++;
}
putchar('\n');
return (0);
}

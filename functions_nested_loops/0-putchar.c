#include <stdio.h>
/**
*main - Prints _putchar
*
*Return: Always 0
*/
int main(void)
{
char *x;

x = "_putchar";
while (*x != 0)
{
putchar(*x);
x++;
}
putchar('\n');
return (0);
}

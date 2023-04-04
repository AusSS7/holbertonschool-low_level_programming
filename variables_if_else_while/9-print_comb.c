#include <stdio.h>
/**
*main - Prints all possible combinations of single-digit numbers.
*
*Return: Always 0
*/
int main(void)
{
int x;

for (x = 48; x < 58; x++)
{
putchar(x);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

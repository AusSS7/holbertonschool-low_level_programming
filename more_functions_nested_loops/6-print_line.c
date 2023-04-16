#include "main.h"

/**
* print_line - draws a straight line
* @n: number of time the character _ should be printed
* Return: None
*/

void print_line(int n)
{

while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}

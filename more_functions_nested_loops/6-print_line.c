#include "main.h"

/**
* print_line - draws a straight line
* @n: number of time the character _ should be printed
* Return: None
*/

void print_line(int n)
{
for (; n <= 10; n++)
{
if (n <= 0)
{
_putchar('\n');
}
 else if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}

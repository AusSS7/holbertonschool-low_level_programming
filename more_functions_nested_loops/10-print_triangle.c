#include "main.h"

/**
* print_triangle - prints triangle
* @size: size of the triangle
* Return: None
*/

void print_triangle(int size)
{

int x, y, b;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
b = (size - x) - 1;
if (y < b)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}


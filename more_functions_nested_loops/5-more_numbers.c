#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
*
* Return: None
*/

void more_numbers(void)
{
int a, b;

for (a = 1; a < 11; a++)
{
for (b = 0; a < 15; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
}

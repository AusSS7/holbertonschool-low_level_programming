#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
*
* Return: None
*/

void more_numbers(void)
{
int a, b;
b = 0;
for (a = 0; a < 10; a++)
{
while (b <= 14)
{
if (b > 9)
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
b++;
}
_putchar('\n');
b = 0;
}

}

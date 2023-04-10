#include "main.h"

/**
*print_sign - prints the sign of the number
*@n: the int to be checked 
*Return: 1 if n is greater than zero, 0 is n is zero and -1 if n is less than 0
*/
int print_sign(int c)
{
if (c > 0)
{
return (1);
_putchar('+');
}
else if (c == 0)
{
return (0);
_putchar('0');
}
else if (c < 0)
{
return (-1);
_putchar('-');
}
}

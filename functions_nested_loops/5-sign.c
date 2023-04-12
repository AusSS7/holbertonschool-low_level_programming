#include "main.h"
#include <stdio.h>

/**
*print_sign - prints the sign of the number
*@n: the int to be checked
*Return: 1 if n is greater than zero, 0 is n is zero and -1 if n is less than 0
*/

int print_sign(int n)
{

if (n > 0)

{
_putchar('+');
return (1);

}
else if (n == 0)

{
_putchar('0');
return (0);

}
else if (n < 0)
{
_putchar('-');
return (-1);

}
return (0);
}

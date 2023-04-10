#include "main.h"

/**
* _abs - Computaes the absolute value of an inteeger.
*@c: The number to be computed.
*Return: Absolute value of number or zero
*/

int _abs(int c)
{
int abs_val;
if (c < 0)
{
abs_val = c * -1;
return (abs_val);
}
return (c);
}

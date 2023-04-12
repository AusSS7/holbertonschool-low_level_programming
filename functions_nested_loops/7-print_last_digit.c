#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*@c: value to be executed
*Return: the last digit
*/

int print_last_digit(int c)
{
int number;
number = c % 10;
if (number < 0)
{
number = number * -1;
}
_putchar(number + '0');
return (number);
}

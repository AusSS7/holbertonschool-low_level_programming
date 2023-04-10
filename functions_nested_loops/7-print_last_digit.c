#include "main.h"

/**
*
*
*
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

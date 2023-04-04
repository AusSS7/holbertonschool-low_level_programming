#include <stdio.h>
/**
*main - Prints all single digit numbers of base 10 starting from 0
*
*Return: Always 0
*/
int main(void)
{
  char num_char[]={'0','1','2','3','4','5','6','7','8','9'};
  int x;
  
  for (x = 0 ; x <= 10; x++)
{
  putchar(num_char[x]);
}

return (0);
}

#include <stdio.h>
/**
*main - Prints all single digit numbers of base 10 starting from 0
*
*Return: Always 0
*/
int main(void)
{
int num_char;

for (num_char = 48 ; num_char < 58; num_char++)
{
putchar(num_char);
}
putchar('\n');
return (0);
}

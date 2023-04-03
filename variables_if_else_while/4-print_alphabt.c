#include <stdio.h>
/**
* main - It prints alphabet in lowercase except q and e
*
* Return: Always 0
*/
int main(void)
{
char letter_lower;

while (letter_lower <= 'z')
{
if (letter_lower == 'e')
{
continue;
}
putchar(letter_lower);
letter_lower++;
}
putchar('\n');
return (0);
}

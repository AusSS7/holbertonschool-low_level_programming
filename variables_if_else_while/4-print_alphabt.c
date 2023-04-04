#include <stdio.h>
/**
* main - It prints alphabet in lowercase except q and e
*
* Return: Always 0
*/
int main(void)
{
char letter_lower;

for (letter_lower = 'a'; letter_lower <= 'z'; letter_lower++)
{
if (letter_lower == 'e')
{
continue;
}
else if (letter_lower == 'q')
{
continue;
}
putchar(letter_lower);
}
putchar('\n');
return (0);
}

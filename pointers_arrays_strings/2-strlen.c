#include "main.h"
#include <stdio.h>
/**
*_strlen - returns the length of a string
*@s: character to be executed
*Return: Always 0
*/

int _strlen(char *s)
{
int a;

s = "My first strlen!";
 
for (a = 0; s[a] != '\0'; a++)
{
}
printf("%d", a);
return (0);
}

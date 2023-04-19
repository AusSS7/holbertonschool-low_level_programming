#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers
*@a: Array
*@n: integer value of the array
*Return: None
*/
void print_array(int *a, int n)
{
int b, c;
c = n - 1;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b < c)
printf(", ");
}
printf("\n");
}

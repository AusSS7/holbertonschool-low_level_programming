#include "main.h"

/**
*swap_int - Swaps the values of two integers
*@a: pointer variable 1 declaration
*@b: pointer variable 2 declaration
*Return: None
*/

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}

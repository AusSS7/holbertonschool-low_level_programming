#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: value of base
* @y: value of exponent
* Return: exponential number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}

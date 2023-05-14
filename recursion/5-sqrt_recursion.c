#include <stdio.h>
#include "main.h"

/**
*
*
*
*/

int _sqrt(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (_sqrt(n, i + 1));
	return (-1);
}

/**
*
*
*
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));

}

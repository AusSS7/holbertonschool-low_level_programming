#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int a;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(args, n);
	for (a = 0; a < n; a++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);

}

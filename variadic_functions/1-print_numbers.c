#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (separator && a != n - 1)
			printf("%s", separator);
	}

	printf("\n");
}

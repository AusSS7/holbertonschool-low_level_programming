#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - function that prints strings
* @separator: string to be printed between the strings
* @n: the number of strings passed to the function
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *p;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s", p);

		if (separator && a != n - 1)
			printf("%s", separator);

	}

	printf("\n");
	va_end(args);
}

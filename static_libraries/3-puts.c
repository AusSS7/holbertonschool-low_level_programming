#include "main.h"
#include <stdio.h>

 /**
 *_puts - Prints a string
 *@str: String value
 *Return:
 */

 void _puts(char *str)
 {
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

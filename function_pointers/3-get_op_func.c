#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* get_of_func - select a function to the corresponding operator
* @s: operator passed as argument to program
* Return: function that corresponds to the operator
*/

int (*get_op_func(char *s))(int, int)
{

	opt_t ops[] =
	{
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 5)
	{

		if(strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

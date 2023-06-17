#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: array to search
* @size: the number of elements in the array
* @cmp: pointer to the function to be used to compare values
* Return: index of int or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (1);
		}
	}
	return (-1);
}

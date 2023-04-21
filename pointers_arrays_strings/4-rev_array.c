#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* reverse_array - reverses the content of an array of integeres
* @a: point variable integer
* @n: number of elements in array
* Return:
*/

void reverse_array(int *a, int n)
{
	int b;
	int temp;

	for (b = 0; b < n / 2; b++)
	{
		temp = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = temp;
	}
	for  (b = 0; b < n; b++)
	{

	}

}

#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to 2d array
* @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int b, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b * (size + 1)];
		sum2 += a[(b + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
	printf("\n");
}

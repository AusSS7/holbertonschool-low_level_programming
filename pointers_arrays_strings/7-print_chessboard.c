#include <string.h>
#include <stdio.h>

/**
* print_chessboard - prints a chessboard
* @a: 2d array of the chessboard
*/

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
			printf("%c", a[i][b]);
		printf("\n");
	}
}

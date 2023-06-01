#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimentional grid
* @grid: 2 dimentional array to free
* @height: number of rows of grid
*/

void free_grid(int **grid, int height)
{

	for (height -= 1; height >= 0; height--)
	{
		/*printf("%d\n", height);*/
		free(grid[height]);
	}
	free(grid);
}

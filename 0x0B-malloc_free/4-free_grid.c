#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free the 2D array
 * @grid: 2D grid
 * @height: Array height
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int pos;
        
	pos = 0;
	while (pos < height)
	{
		free(grid[pos]);
		pos++;
	}
	free(grid);
}

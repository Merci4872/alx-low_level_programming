#include "main.h"

/**
* free_grid - frees a 2 dimensional grid.
* @grid: 2D array.
* @height: height of the array.
*
* Return: void.
*/
void free_grid(int **grid, int height)
{
int h_idx;

for (h_idx = 0; h_idx < height; h_idx++)
free(grid[h_idx]);

free(grid);
}


#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
*
* Return: pointer to the 2D array.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int h_idx, w_idx;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

if (!grid)
return (NULL);

for (h_idx = 0; h_idx < height; h_idx++)
{
grid[h_idx] = malloc(sizeof(int) * width);
if (!grid[h_idx])
{
for (; h_idx >= 0; h_idx--)
free(grid[h_idx]);
free(grid);
return (NULL);
}

for (w_idx = 0; w_idx < width; w_idx++)
grid[h_idx][w_idx] = 0;
}

return (grid);
}


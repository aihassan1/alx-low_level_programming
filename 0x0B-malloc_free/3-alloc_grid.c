#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Allocates a 2D array of integers.
* @width: Width of the grid.
* @height: Height of the grid.
*
* Return: Pointer to the allocated 2D array, or NULL on failure.
*/

int **alloc_grid(int width, int height)
{
int i, r;
int **grid = malloc(sizeof(int *) * height);

if (width <= 0 || height <= 0)
return (NULL);

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
}

for (r = 0; r < height; r++)
{
int c;
for (c = 0; c < width; c++)
{
grid[r][c] = 0;
}
}
free_grid(grid,height);
return (grid);
}
/**
 * free_grid - Frees the memory allocated for a 2D array.
 * @grid: Pointer to the 2D array.
 * @height: Height of the array.
  */
 void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

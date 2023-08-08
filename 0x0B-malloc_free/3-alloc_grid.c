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
return (grid);
}

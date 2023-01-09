#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
int row, col;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (row = 0 ; row < height ; row++)
grid[row] = malloc(sizeof(int) * width);

if (grid == NULL)
{
free(grid);
return (NULL);
}
for (row = 0 ; row < height ; row++)
for (col = 0 ; col < width ; col++)
{
grid[row][col] = 0;
}
return (grid);
}


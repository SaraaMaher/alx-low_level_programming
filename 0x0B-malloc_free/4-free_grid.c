#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2d array
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
int r;
for (r = 0 ; r < height ; r++)
{
free(grid[r]);
}
free(grid);
}

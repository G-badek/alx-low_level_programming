#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * @width: Width of grid
 * @height: Height of grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width < 1 || height < 1)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (--i >= 0)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}

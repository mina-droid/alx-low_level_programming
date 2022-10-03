#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 *@grid: length of argv
 *@height: number of argument
 *Return: Always 0
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

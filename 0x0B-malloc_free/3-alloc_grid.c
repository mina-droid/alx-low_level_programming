#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 *@width: length of argv
 *@height: number of argument
 *Return: Always 0
 */

int **alloc_grid(int width, int height)
{
int i;
int j;
int **res;
if (width == 0 || height == 0 || width < 0 || height < 0)
{
return (NULL);
}
res = malloc(sizeof(int *) * height);
if (res == NULL)
{
free(res);
return (NULL);
}
for (i = 0; i < height; i++)
{
res[i] = malloc(sizeof(int) * width);
if (res[i] == NULL)
{
free(res[i]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
res[i][j] = 0;
}
}
return (res);
}

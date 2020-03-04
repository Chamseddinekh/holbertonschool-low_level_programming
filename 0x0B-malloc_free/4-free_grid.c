#include "holberton.h"
#include<stdlib.h>
/**
 * free_grid - allocate memory array of int
 *@grid: size of arry
 *@height: size of arry
 *Return: pointer to array
 **/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

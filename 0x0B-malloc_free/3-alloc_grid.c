#include "holberton.h"
#include<stdlib.h>
/**
 * alloc_grid - allocate memory array of int
 *@width: size of arry
 *@height: size of arry
 *Return: pointer to array
 **/
int **alloc_grid(int width, int height)
{
int size, i;
int **arr;
if (width <= 0 && height <= 0)
return (NULL);
size = height * width;
arr = malloc(size *sizeof(int));
if (arr ==  NULL)
return (NULL);
for (i = 0; i < width; i++)
{
arr[i] = malloc(sizeof(int) * height);
}
return (arr);
}

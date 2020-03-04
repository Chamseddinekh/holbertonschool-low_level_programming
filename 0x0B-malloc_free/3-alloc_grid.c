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
int i, j;
int **arr;
if (width <= 0 && height <= 0)
return (NULL);
arr = malloc(width * sizeof(int));
if (arr ==  NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int *) * height);
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
}

}
return (arr);
}

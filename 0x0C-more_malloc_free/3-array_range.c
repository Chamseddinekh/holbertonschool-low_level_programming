#include<stdlib.h>
#include "holberton.h"
/**
 * sarray_range - array from min to max
 *@min: min number
 *@max: max number
 *Return: pointer array
 **/
int *array_range(int min, int max)
{
int *arr, size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}

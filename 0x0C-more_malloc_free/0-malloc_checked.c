#include<stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * malloc_checked - allocate memory
 *@b: size of arry
 *Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
int *ptr;
int num = 98;
ptr = malloc(b * sizeof(ptr));
if (ptr == NULL)
{
ptr = &num;
return (ptr);
}
return (ptr);
}

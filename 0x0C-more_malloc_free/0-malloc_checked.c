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
unsigned int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

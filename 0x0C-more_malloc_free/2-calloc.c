#include<stdlib.h>
#include "holberton.h"
/**
 * _calloc - concat 2 strings
 *@nmemb: number of elemnts
 *@size: size of bytes
 *Return: pointer array allocated
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
return (arr);
}

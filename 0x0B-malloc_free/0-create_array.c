#include "holberton.h"
#include<stdlib.h>
/**
 * create_array - allocate memory array of int
 *@size: size of arry
 *@c: intialization of the first char in ary
 *Return: pointer to array
 **/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}

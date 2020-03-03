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
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
p[0] = c;
if (p[0] == '\0')
return (0);
else
return (p);
}

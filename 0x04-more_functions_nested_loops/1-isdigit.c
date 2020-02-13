#include "holberton.h"
/**
 *_isdigit - use only user defined variables to create output
 *@c: number input
 *Return: return 1 if is c digit else 0
 **/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

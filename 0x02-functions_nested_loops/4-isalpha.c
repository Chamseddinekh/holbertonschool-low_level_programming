#include "holberton.h"
/**
 *islower- use only user defined variables to create output
 *@c : variable input
 *Return: 0 if the character is lower 1 fi not
 **/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}

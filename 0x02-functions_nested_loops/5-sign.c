#include "holberton.h"
/**
 *print_sign- use only user defined variables to create output
 *@n : variable input
 *Return: 0 if the character is lower 1 fi not
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
_putchar(45);
return (-1);
}

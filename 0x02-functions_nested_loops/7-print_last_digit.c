#include "holberton.h"
/**
 *print_last_digit- use only user defined variables to create output
 *@n: type of input
 *Return: 0 if the character is lower 1 fi not
 **/
int print_last_digit(int n)
{
int res;
if (n < 0)
{
res = (n * (-1));
n = res % 10;
_putchar(n + '0');
return (n);
}
res = n % 10;
_putchar(res + '0');
return (res);
}


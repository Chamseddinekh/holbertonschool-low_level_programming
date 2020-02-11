#include "holberton.h"
/**
 *_abs- use only user defined variables to create output
 *@n : variable input
 *Return: 0 if the character is lower 1 fi not
 **/
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else
return ((n < 0) ? (-n) : (n));

}

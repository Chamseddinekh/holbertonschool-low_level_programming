#include "holberton.h"
/**
 * natural_sqrt - print length
 * @num: int
 *@i : int
 *Return: sqrt
 */
int natural_sqrt(int num, int i)
{
if (i * i == num)
return (i);
if (i * i != num && i < num)
return (natural_sqrt(num, i + 1));
else
return (-1);
}
/**
 *_sqrt_recursion - result
 *@n: int
 *Return: sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (natural_sqrt(n, 1));
}

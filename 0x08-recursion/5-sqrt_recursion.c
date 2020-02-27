#include "holberton.h"
/**
 *natural_sqrt - sqrt
 *@num: int
 *@i: int
 *Return: sqrt number
 */
int natural_sqrt(int num, int i)
{
while (i * i != num && i < num)
i++;
if (i *i == num && i > 0)
return (i);
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
int i;
i = natural_sqrt(n, 0);
return (i);
}

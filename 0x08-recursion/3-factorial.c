#include "holberton.h"
/**
 *factorial - print length
 * @n: string
 *Return: fact n
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

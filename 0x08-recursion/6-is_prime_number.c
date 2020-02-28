#include "holberton.h"
/**
 * prime - prime number
 * @num: int
 *@i : int
 *Return: sqrt
 */
int prime(int num, int i)
{
if (i == num)
return (1);
else if (num % i == 0)
return (0);
else
return (prime(num, i + 1));
}
/**
 *is_prime_number - result
 *@n: int
 *Return: prime number
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
else
return (prime(n, 2));
}

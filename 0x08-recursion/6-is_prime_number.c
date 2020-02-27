#include "holberton.h"
/**
 * prime - prime number
 * @num: int
 *@i : int
 *Return: sqrt
 */
int prime(int num, int i)
{
if (num / i == 0)
return (0);
if (i < num)
return (prime(num, i + 1));
else
return (1);
}
/**
 *is_prime_number - result
 *@n: int
 *Return: prime number
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}

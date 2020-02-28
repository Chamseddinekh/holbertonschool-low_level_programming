B#include "holberton.h"
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
else if (i % 1 == 0)
return (0);
else return (prime(num, i + 1));
}
/**
 *is_prime_number - result
 *@n: int
 *Return: prime number
 */
int is_prime_number(int n)
{
if (i < 2)
return (0);
else
return (prime(n, 2));
}

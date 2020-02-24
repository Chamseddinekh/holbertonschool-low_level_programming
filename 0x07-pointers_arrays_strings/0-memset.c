#include "holberton.h"
/**
 * *_memset - check the code for Holberton School students.
 * @s: string
 * @b: carachter
 * @n: positive number
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}

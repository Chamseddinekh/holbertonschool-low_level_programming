#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: number to convert
 * Return: the converted numbe
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec = 0;
int len = 0, powr = 1;
if (b == NULL)
return (0);
while (b[len] != '\0')
{
if (b[len] == '0' || b[len] == '1')
len++;
else
return (0);
}
while (len - 1 >= 0)
{
dec += powr * (b[--len] - '0');
powr *= 2;
}
return (dec);
}

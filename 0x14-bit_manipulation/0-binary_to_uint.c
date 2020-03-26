#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: number to convert
 * Return: the converted numbe
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len = 0, dec = 0, i = 0;
if (b == NULL)
return (0);
while (b[len] != '\0')
{
if (b[len] == '0' || b[len] == '1')
len++;
else
return (0);
}
while (b[i] != '\0')
{
dec = dec + (1 << (len - 1) * b[i]);
i++;
}
return (dec);
}

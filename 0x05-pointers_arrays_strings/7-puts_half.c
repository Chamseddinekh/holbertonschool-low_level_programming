#include "holberton.h"
/**
 *  puts_half - entry block
 * @a: pointer 
 *@n : var
 * Return: 0 (Sucess)
 **/

void puts_half(char *str)
{
int i, len = 0;
while (str[len] != '\0')
len++;
if (len % 2 != 0)
{
for (i = (len / 2) + 1; i < len; i++)
_putchar(str[i]);
}
else
{
for (i = len / 2; i < len; i++)
_putchar(str[i]);
}
_putchar('\n');
}

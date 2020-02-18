#include "holberton.h"
/**
 *  puts_half - entry block
 * @str: string
 * Return: 0 (Sucess)
 **/

void puts_half(char *str)
{
int i, n, len = 0;
while (str[len] != '\0')
len++;

if (len % 2 == 0)
{
n = len / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
}
else
n = len / 2;
for (i = n; i < len; i++)
_putchar(str[i]);


}

#include "holberton.h"
/**
 *  print_rev - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/

void print_rev(char *s)
{
int i, len = 0;
while (s[len] != '\0')
len++;
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');

}

#include "holberton.h"
/**
 *  print_rev - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/
void print_rev(char *s)
{
int len = 0;
while (s[len])
len++;

while(s[len - 1])
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}

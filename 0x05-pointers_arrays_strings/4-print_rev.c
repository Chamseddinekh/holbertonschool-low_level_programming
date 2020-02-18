#include "holberton.h"
/**
 *  print_rev - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/
void print_rev(char *s)
{
int len, i;
len = _strlen(s);
i = len;
while (i != '\0')
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

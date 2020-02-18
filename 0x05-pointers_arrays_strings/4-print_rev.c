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
for (i = len; i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}

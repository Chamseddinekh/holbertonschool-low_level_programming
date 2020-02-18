#include "holberton.h"
/**
 *  print_rev - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/
void print_rev(char *s)
{
int len, i;
len =0;
for (i = _strlen(s); i >= 0; i--)
{
_putchar(s[i]);

}
_putchar('\n');
}

#include "holberton.h"
/**
 *  puts2 - entry block
 * @str: string
 * Return: 0 (Sucess)
 **/
void puts2(char *str)
{
int i,len;
i=0;
len =0;
len = _strlen(str);
for (i=0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

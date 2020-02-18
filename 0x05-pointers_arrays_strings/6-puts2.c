#include "holberton.h"
/**
 *  puts2 - entry block
 * @str: string
 **/
void puts2(char *str)
{
int i, length;
i = 0;
length = _strlen(str);
for (i = 0; i < length-1; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

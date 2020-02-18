#include "holberton.h"
/**
 *  puts2 - entry block
 * @str: string
 * Return: 0 (Sucess)
 **/
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
i++;
}
_putchar('\n');
}

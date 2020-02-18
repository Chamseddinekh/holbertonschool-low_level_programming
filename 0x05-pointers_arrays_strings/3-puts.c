#include "holberton.h"
/**
 *  _puts - entry block
 * @str: string
 * Return: 0 (Sucess)
 **/
void _puts(char *str)
{
int len = 0;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}

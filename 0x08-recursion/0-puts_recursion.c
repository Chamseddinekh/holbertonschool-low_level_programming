#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: string
 * Return: str
 */
void _puts_recursion(char *s)
{
puts(s);
(*s)++;
while (*s)
{
_puts_recursion(s);
}
}

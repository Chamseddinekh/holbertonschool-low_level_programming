#include "holberton.h"
/**
 * _print_rev_recursion - print rev
 * @s: string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
++s;
_print_rev_recursion(s);
_putchar(*s);
}
}

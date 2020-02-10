#include "holberton.h"
/**
 *print_alphabet- use only user defined variables to create output
 *
 *Return: print to stdout the alphabet, in lowercase, followed by a new line.
 **/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

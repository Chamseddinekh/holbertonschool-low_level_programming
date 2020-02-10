#include "holberton.h"
/**
 *print_alphabet_x10- use only user defined variables to create output
 *
 *Return: print to stdout the alphabet, in lowercase, 10 times with new line .
 **/
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

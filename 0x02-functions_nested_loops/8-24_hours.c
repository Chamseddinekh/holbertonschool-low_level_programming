#include "holberton.h"
/**
 *jack_bauer - use only user defined variables to create output
 *
 *
 **/
void jack_bauer(void)
{
int m, s;
for (m = 0; m < 24; m++)
{
for (s = 0; s < 60; s++)
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar (':');
_putchar(s / 10 + '0');
_putchar (s % 10 + '0');
_putchar ('\n');
}
}
}

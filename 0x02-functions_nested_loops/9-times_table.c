#include "holberton.h"
/**
 *times_table - use only user defined variables to create output
 *
 *
 **/
void times_table(void)
{
int i, j, res;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
res = i * j;
if (res > 9)
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(res + '0');
if (j != 9)
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}

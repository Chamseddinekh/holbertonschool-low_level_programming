#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
int i;
for (i = 0; i <= 99; i++)
{
if (i < 9)
{
putchar(0 + '0');
putchar(i + '0');
putchar(',');
putchar(' ');
}
else if (i == 99)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
else
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}

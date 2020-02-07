#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

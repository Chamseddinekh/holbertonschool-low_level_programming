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
char i;

i = 'a';
while (i <= 'z')
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}

/**
 * main - printing digit
 * Return: print all possible different combinations of digits
 **/

#include<stdio.h>
int main(void)
{
int i = '0', j = '0';
while (i <= '9')
{
j = i + 1;
while (j <= '9')
{
putchar(i);
putchar(j);
if (i == '8' && j == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
return (0);
}

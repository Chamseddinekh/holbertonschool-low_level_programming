#include<stdio.h>
/**
 *print_to_98- use only user defined variables to create output
 *@n : variable input
 *Return: 0 if the character is lower 1 fi not
 **/
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else if (n == 98)
{
printf("%d\n", n);
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);

}
printf("98\n");
}
}

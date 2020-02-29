#include<stdio.h>
/**
 * main - printing digit
 *@argc: number of agruments
 *@argv: table of arguments
 *Return: number of arguments
 **/
int main(int argc, char **argv)
{
int i, sum = 0;
for(i = 1; i < argc; i++)
sum += i;
printf("%d\n", sum);
argv++;
return (0);
}

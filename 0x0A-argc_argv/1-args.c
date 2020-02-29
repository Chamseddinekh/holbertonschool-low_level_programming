#include<stdio.h>
/**
 * main - printing digit
 *@argc: number of agruments
 *@argv: table of arguments
 *Return: number of arguments
 **/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
;
printf("%d\n", i - 1);
argv++;
return (0);
}

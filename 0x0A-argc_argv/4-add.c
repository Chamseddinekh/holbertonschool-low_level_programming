#include<stdio.h>
#include<stdlib.h>
/**
 * main - printing digit
 *@argc: number of agruments
 *@argv: table of arguments
 *Return: number of arguments
 **/
int main(int argc, char **argv)
{
int i, sum = 0;
for (i = 0; i < argc; i++)
;
if (i < 3)
{
printf("Error\n");
return (1);
}
else
for (i = 1; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
return (0);
}

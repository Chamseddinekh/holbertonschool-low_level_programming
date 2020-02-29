B#include<stdio.h>
#include<stdlib.h>
/**
 * main - printing digit
 *@argc: number of agruments
 *@argv: table of arguments
 *Return: number of arguments
 **/
int main(int argc, char **argv)
{
int i, mul = 1;
for (i = 0; i < argc; i++)
;
if (i < 1)
{
printf("Error\n");
return (1);
}
else
for (i = 1; i < argc; i++)

mul = mul *atoi(argv[i]);
printf("%d\n", mul);

return (0);
}

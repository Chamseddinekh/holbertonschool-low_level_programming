#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - printing digit
 *@argc: number of agruments
 *@argv: table of arguments
 *Return: number of arguments
 **/
int main(int argc, char **argv)
{
int j, i, sum = 0;
for (i = 0; i < argc; i++)
;
if (i < 3)
{
printf("0\n");
return (0);
}
 for (i = 1; i < argc; i++)
   {
     j = 0;
     while (argv[i][j] != '\0')
       if (! (isdigit(argv[i][j]) && atoi(argv[i]) > 0))
	 {
	   printf("Error\n");
	   return (1);
	   
	 }
       else
	 {
	   j++;
	 }	   
sum += atoi(argv[i]);
	 
   }
 printf("%d\n", sum);
 return (0);
}

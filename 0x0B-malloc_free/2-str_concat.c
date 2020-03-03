#include "holberton.h"
#include<stdlib.h>
/**
 * str_concat - allocate memory array of int
 *@s1: size of arry
 *@s2: size of arry
 *Return: pointer to array
 **/
char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, length, length1;
if (s1 == NULL && s2 == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
;
length1 = i;
for (j = 0; s1[j] != '\0'; j++)
;
j = j + 1;
length = i + j;
str = malloc(length *sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; i <= length1; i++)
{
str[i] = s1[i];
}
for (j = 0; j <= length; j++)
{
str[j + length1] = s2[j];
}
return (str);
}

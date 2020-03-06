#include<stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concat 2 strings
 *@s1: first string
 *@s2: second string
 *@n: number of carachter copied from s2
 *Return: pointer to concat string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0, j = 0, size, m = 0, s = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[s] != '\0')
{
s++;
}
if (n >= j)
size = i + s + 1;
size = i + n + 1;
str = malloc(size *sizeof(char));
if (str == NULL)
return (NULL);
while (s1[j] != '\0')
{
str[j] = s1[j];
j++;
}
while (s2[m] != '\0' && m < n)
{
str[m + i] = s2[m];
m++;
}
return (str);
}

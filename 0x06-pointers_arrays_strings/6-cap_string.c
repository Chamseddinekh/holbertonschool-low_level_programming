#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @str: variable
 * Return: Always 0.
 */
char *cap_string(char *str)
{
int symb[14] = {46, 34, 125, 32, 44, 40, 63, 33, 9, 59, 41, 123, 10};
int i,  j;
for (i = 0; str[i] != '\0'; i++)
{
if (str[0] >= 97 && str[0] <= 122)
str1[0] = str1[0] - 32;
for (k = 0; k < 11; k++)
if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[k])
str[i] = str[i] - 32;
}
return (str);
}

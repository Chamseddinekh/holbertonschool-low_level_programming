#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @str: variable
 * Return: Always 0.
 */

char *cap_string(char *str)
{
int symb[14] = {32, 9, 10, 46, 44, 59, 63, 33, 34, 40, 41, 123, 125};
int i,  j, t;
for (i = 0; str[i] != '\0'; i++)
{
if (str[0] >= 97 && str[0] <= 122)
str[0] = str[0] - 32;
for (t = 0; t < 11; t++)
if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[t])
str[i] = str[i] - 32;
}
return (str);
}

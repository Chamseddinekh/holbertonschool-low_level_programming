#include "holberton.h"
/**
 *string_toupper - check the code for Holberton School students.
 * @str: var
 * Return: str
 */
char *string_toupper(char *str)
{
int i = 0, j;
j = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
j++;
}
else
{
j++;
}
}
return (str);
}

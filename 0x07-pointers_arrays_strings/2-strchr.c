#include "holberton.h"
/**
 * *_strchr - check the code for Holberton School students.
 * @s: string
 * @c: positive number
 * Return: dest
 */
char *_strchr(char *s, char c)
{
int j = 0;
char *str;

while (s[j] != '\0')
{
while (s[j] != c && s[j] != s[j + 1])
{
j++;
}

str = &s[j];
return (str);
}
return (NULL);
}

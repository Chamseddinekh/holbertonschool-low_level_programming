#include "holberton.h"
/**
 * *_memcpy - check the code for Holberton School students.
 * @s: string
 * @c: positive number
 * Return: dest
 */
char *_strchr(char *s, char c)
{
int j = 0, len = 0;
char *str;
while (len != '\0')
{
len++;
}
len = len - 1;
while (s[j] != c && s[j] != s[j + 1])
{
j++;
}
str = &s[j];
return (str);
return (0);
}

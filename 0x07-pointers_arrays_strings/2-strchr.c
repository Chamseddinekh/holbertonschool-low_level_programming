#include <stdio.h>
#include "holberton.h"
/**
 * *_strchr - check the code for Holberton School students.
 * @s: string
 * @c: positive number
 * Return: dest
 */
char *_strchr(char *s, char c)
{
int i = 0;
char *str = NULL;
while (s[i] != c)
{
i++;
}
if (s[i] == c)
{
str = &s[i];
return (str);
}
else
return (str);
}

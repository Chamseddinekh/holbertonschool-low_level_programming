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
int j = 0;
char *str = NULL;

for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == c)
{
str = &s[j];
return (str);
break;
}
}
return (str);
}


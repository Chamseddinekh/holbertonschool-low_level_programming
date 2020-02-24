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

for (j = 0; j != '\0'; j++) 
{
while (s[j] != c && s[j + 1] != c)
{
j++;
}
str = &s[j];
return (str);
}
return (str);
}

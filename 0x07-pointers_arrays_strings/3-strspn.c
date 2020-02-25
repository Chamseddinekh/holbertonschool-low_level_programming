#include "holberton.h"
/**
 * *_strspn - check the code for Holberton School students.
 * @s: sxsd
 * @accept: positive number
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
j = 0;
break;
}
}
if (s[i] != accept[j] && accept[j] == '\0')
break;
}
return (i);
}

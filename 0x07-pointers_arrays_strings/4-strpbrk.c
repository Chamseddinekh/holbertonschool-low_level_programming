#include "holberton.h"
/**
 * *_strpbrk - check the code for Holberton School students.
 * @s: sxsd
 * @accept: positive number
 * Return: i
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *adr = NULL;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
adr = &s[i];
break;
}
}
if (s[i] == accept[j] || s[i] == '\0')
break;
}
return (adr);
}

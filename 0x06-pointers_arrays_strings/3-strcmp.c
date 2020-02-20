#include "holberton.h"
/**
 *  _strcmp - entry block
 * @s1: pointer
 *@s2 : var
 * Return: dest
 **/

int _strcmp(char *s1, char *s2)
{
int i, j = 0, res = 0;
for (i = 0; s1[i] != '\n'; i++)
{
if (s1[i] == s2[j])
j++;
else
res = s1[i] - s2[j];
break;
}
return (res);
}

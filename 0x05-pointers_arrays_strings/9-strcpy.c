#include "holberton.h"
/**
 *  *_strcpy - entry block
 * @dest: pointer
 *@src : var
 * Return: dest
 **/
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i, j;
while (src[len] != '\0')
len++;
j = 0;
for (i = 0; i <= len; i++)
{
dest[j] = src[i];
j++;
}
return (dest);
}

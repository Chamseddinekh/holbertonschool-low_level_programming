#include "holberton.h"
/**
 *  *_strncpy - entry block
 * @dest: pointer
 *@src : var
 *@n : var
 * Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (j = 0; src[j] != '\0'; j++)
;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
for (; i <= n; i++)
dest[j] = '\0';
return (dest);
}

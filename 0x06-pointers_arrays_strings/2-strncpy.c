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
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[j] = src[j];
for ( ; j < n; j++)
dest[j] = '\0';
return (dest);
}

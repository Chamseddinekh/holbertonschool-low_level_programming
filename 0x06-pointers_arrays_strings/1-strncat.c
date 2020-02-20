#include "holberton.h"
/**
 *  *_strncat - entry block
 * @dest: pointer
 *@src : var
 *@n : var
 * Return: dest
 **/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}

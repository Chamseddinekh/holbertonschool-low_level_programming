#include "holberton.h"
/**
 *  *_strcat - entry block
 * @dest: pointer
 *@src : var
 * Return: dest
 **/

char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}

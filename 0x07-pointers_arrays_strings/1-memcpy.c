#include "holberton.h"
/**
 * *_memcpy - check the code for Holberton School students.
 * @src: string
 * @dest: carachter
 * @n: positive number
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0, j = 0, len = 0;
while (i != '\0')
{
len++;
}
for (j = len; j < n; j++)
{
dest[j] = src[i];
i++;
}
return (dest);
}

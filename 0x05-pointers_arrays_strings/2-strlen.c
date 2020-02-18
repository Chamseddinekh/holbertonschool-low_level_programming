#include "holberton.h"
/**
 *  _strlen - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

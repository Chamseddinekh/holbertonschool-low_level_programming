#include "holberton.h"
#include <stdio.h>
/**
 *_strlen_recursion - print length
 * @s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
else
return (0);
}

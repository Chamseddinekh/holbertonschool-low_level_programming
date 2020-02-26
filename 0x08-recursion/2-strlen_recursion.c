B#include "holberton.h"
/**
 *_strlen_recursion - print length
 * @s: string
 *Return: length
 */
int _strlen_recursion(char *s)
{
{
if (s == NULL)
return (0);
else if (*s)
return (1 + _strlen_recursion(s + 1));
}
}

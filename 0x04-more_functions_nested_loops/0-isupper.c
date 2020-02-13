#include "holberton.h"
/**
 *_isupper - use only user defined variables to create output
 *@c : input carachter
 *Return: return 1 if c uppercase else 0
 **/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

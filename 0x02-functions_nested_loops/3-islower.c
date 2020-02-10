#include "holberton.h"
#include <ctype.h>
/**
 *_islower- use only user defined variables to create output
 *@c : take a character
 *Return: 0 if the character is lower 1 fi not
 **/
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else

return (0);

}

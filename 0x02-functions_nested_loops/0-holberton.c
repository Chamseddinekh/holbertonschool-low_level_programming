#include "holberton.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
int i = 0;
String c = "Holberton";
while (c[i] != '\0')
{
_putchar (c[i]);
i++;
}
_putchar ('\n');
return (0);
}

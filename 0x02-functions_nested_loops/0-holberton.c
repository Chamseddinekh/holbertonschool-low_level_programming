#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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
putchar (c[i]);
i++;
}
return (0);
}

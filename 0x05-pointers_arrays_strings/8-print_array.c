#include "holberton.h"
#include <stdio.h>
/**
 *  print_array - entry block
 * @a: pointer
 *@n : var
 * Return: 0 (Sucess)
 **/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
printf("%d, ", a[i]);
printf("%d", a[n - 1]);
printf("\n");
}

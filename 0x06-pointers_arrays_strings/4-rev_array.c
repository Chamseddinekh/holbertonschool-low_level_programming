#include "holberton.h"
/**
 * reverse_array - entry block
 * @a: pointer
 *@n : var
 * Return: dest
 **/


void reverse_array(int *a, int n)
{
int i, j, k;
j = 0;
for (i = n - 1; i >= n / 2; i--)
{
k = a[j];
a[j] = a[i];
a[i] = k;
j++;
}
}

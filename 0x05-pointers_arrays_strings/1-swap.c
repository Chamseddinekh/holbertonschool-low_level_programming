#include "holberton.h"
/**
 *  swap_int - entry block
 * @a: pointer
 *@b: pointer
 * Return: 0 (Sucess)
 **/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

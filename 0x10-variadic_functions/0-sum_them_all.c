#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sum of n integer
*@n: number of interger passed
*Return: return sum of all argumets
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list PtrN;
va_start(PtrN, n);
for (i = 0; i < n; i++)
sum += va_arg(PtrN, int);
va_end(PtrN);
return (sum);
}

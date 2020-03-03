#include "holberton.h"
#include<stdlib.h>
/**
 * _strdup - allocate memory array of int
 *@str: size of arry
 *Return: pointer to array
 **/
char *_strdup(char *str)
{
char *p;
int i, j = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
p = malloc(i * sizeof(char));
if (p == NULL)
return (NULL);
else
for (i = 0; str[i] != '\0'; i++)
{
p[j] = str[i];
j++;
}
return (p);

}

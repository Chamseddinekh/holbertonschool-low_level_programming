#include "holberton.h"
/**
 * *leet - check the code for Holberton School students.
 * @string: variable
 * Return: Always 0.
 */
char *leet(char *string)
{
int i, j, k;
int alph1 [6] = {52, 48, 51, 55, 49};
char alph [11] = {'A', 'a', 'O', 'o', 'E', 'e', 't', 'T', 'l', 'L'};
k = 0;
for (i = 0; string[i] != '\0'; i++)
{
for (j = 0; alph[j] != '\0'; j++)
if (string[i] == alph[j])
{
string[i] = alph1[k + j / 2];
}
}
return (string);
}


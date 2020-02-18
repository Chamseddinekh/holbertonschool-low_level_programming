#include "holberton.h"
/**
 *  rev_string - entry block
 * @s: string
 * Return: 0 (Sucess)
 **/
void rev_string(char *s)
{
int j, i, len = 0;
while (s[len] != '\0')
len++;
len = len - 1;
char *s_begin, *s_end, c;
s_begin = s;
s_end = s;
for (i = 0; i < len; i++)
s_end++;
for (i = 0; i < len / 2; i++) 
{
c = *s_end;
*s_end = *s_begin;
*s_begin = c;
s_begin++;
s_end--;}

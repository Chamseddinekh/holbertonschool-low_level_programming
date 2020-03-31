#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * @filename: name of file to read
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char buffer[blok];
size_t n, i = 0;
FILE *ptr;
if (filename == NULL)
return (0);

ptr = fopen(filename, "r");
if (ptr == NULL)
return (0);
if (ptr)
{
while ((n = fread(buffer, 1, sizeof(buffer), ptr)) > 0)
{

i = fwrite(buffer, 1, n, stdout);
}
if (ferror(ptr))
return (0);
}
fclose(ptr);
letters = i;
return (letters);
}

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
size_t n, cmp = 0;
int ptr;
if (filename == NULL)
return (0);

ptr = open(filename, O_RDONLY);
if (ptr == -1)
return (0);
if (ptr)
{
while ((n = read(ptr, buffer, sizeof(letters))))
cmp = write(1, buffer, n);
}
close(ptr);

return (cmp);
}

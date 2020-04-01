#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * @filename: name of file to read
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fop, fr, fw;
if (filename == NULL)
return (0);
buffer = malloc(letters);
fop = open(filename, O_RDONLY);
if (fop == -1)
return (0);
fr = read(fop, buffer, letters);
if (fr == -1)
return (0);
fw = write(1, buffer, fr);
close(fop);
return (fw);
}

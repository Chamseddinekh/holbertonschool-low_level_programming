#include "holberton.h"
#include <string.h>
/**
 * read_textfile - function that reads a text file
 * @filename: name of file to read
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
int fd, tw;
if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT);
if (fd == -1)
return (-1);

if (text_content)
{
tw = write (fd, text_content, strlen(text_content));
if (tw == -1)
return (tw);
}
close(fd);
return (1);
}

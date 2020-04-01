#include "holberton.h"
#include <string.h>
/**
 * create_file - function that create file
 * @filename: name of file to read
 * @text_content: text to writhe in the file
 * Return: create new file
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
tw = write(fd, text_content, strlen(text_content));
if (tw == -1)
return (tw);
}
close(fd);
return (1);
}

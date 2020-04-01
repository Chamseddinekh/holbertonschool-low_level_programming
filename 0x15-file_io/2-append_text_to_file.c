#include "holberton.h"
#include <string.h>
/**
 * append_text_to_file - function that create file
 * @filename: name of file to read
 * @text_content: text to writhe in the file
 * Return: create new file
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, tw;
if (!filename)
return (-1);

fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);

if (text_content)
{
tw = write(fd, text_content, strlen(text_content));
if (tw == -1)
return (-1);
}
close(fd);
return (1);

}

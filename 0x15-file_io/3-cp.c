#include "holberton.h"
/**
 * main - return 1
 * @ac: number of arguments
 * @av: array of argumets
 * Return: 1 if ok
 */
int main(int ac, char **av)
{
int off, oft, rff, wft, cl, cl1;
char buffer[blok];
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
off = open(av[1], O_RDONLY);
if (off == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
exit(98);
}
oft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (off == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", av[2]);
exit(99);
}
rff = read(off, buffer, blok);
if (rff == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", av[1]);
exit(98);
}

wft = write(oft, buffer, rff);
if (wft == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", av[2]);
exit(99);


}
cl = close(off);
cl1 = close(oft);
if (cl == -1 || cl1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", off);
return (100);
}
return (0);
}

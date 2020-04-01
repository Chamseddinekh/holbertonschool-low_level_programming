#include "holberton.h"

int main(int ac, char **av)
{
int off, oft, rff, wft, cl, cl1;
char buffer[blok];
if (ac != 3)
{
printf("Usage: cp file_from file_to\n");
exit(97);
}
off = open(av[1], O_RDWR, 664);
if (off == -1)
{
printf("Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
oft = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 664);
if (off == -1)
exit(99);
rff = read(off, buffer, 1024);
if (rff == -1)
{
printf("Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
wft = write(STDOUT_FILENO, buffer, rff);
if (wft == -1)
{
printf("Error: Can't write to NAME_OF_THE_FILE\n");
exit(99);
}
cl = close(off);
cl1 = close(oft);
if (cl == -1 || cl1 == -1)
{
printf("Error: Can't close fd FD_VALUE\n");
return (100);
}
return (1);
}

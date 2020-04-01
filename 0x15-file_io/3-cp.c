#include "holberton.h"

int main(int ac, char **av)
{
int off, oft, rff, wft, cl, cl1;
char buffer[blok];
if (ac != 3)
{
printf("Usage: cp %s %s\n", av[1], av[2]);
exit(97);
}
off = open(av[1], O_RDWR, 0641);
if (off == -1)
{
printf("Error: Can't read from %s\n", av[1]);
exit(98);
}
oft = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0641);
if (off == -1)
exit(99);
rff = read(off, buffer, 1024);
if (rff == -1)
{
printf("Error: Can't read from file  %s\n", av[1]);
exit(98);
}
wft = write(oft, buffer, rff);
if (wft == -1)
{
printf("Error: Can't write to  %s\n", av[2]);
exit(99);
}
cl = close(off);
cl1 = close(oft);
if (cl == -1 || cl1 == -1)
{
printf("Error: Can't close fd %d\n", off);
return (100);
}
return (1);
}

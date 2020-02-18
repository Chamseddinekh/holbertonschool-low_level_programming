void puts_half(char *str)
{
int i, n, len = 0;
while (str[len] != '\0')
len++;
len = len-1
if (len % 2 == 0)
{
n = len / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
}
else
{
n = (len - 1) / 2;
for (i = n; i < len; i++)
_putchar(str[i]);
}
}

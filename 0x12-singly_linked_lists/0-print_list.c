#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_list - print list
*@h: Structure of linked list
*Return: values of struct
*/
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if ((*h).str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = (*h).next;
i++;
}
return (i);
}

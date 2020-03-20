#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*list_len - calc length of linked list
*@h:linked list
*Return: returns the number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
h = (*h).next;
i++;
}
return (i);
}

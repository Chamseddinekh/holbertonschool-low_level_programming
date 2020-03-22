#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node_end - funtion add node at the end of list
*@head: Structure of linked list
*@str: string to add in the node
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
char *strcp;
list_t  *new = NULL, *ptr = NULL;
int i = 0;
while (str[i] != '\0')
i++;
new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
strcp = malloc(i);
if (strcp == NULL)
{
free(new);
return (NULL);
}
strcp = strdup(str);
new->str = strcp;
new->len = i;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}
return (*head);
}

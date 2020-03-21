#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node - funtion add node
*@head: Structure of linked list
*@str: string to add in the node
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
char *strcp;
list_t *new;
int i = 0;
while (str[i] != '\0')
i++;
new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
strcp = malloc(i);
if (strcp == NULL)
return (NULL);
strcp = strdup(str);
new->str = strcp;
new->len = i;
new->next = *head;
*head = new;
return (new);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at index 
 * @head: list to print
 * @index: index to print
 * Return: return node content
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned   int i, j = 0;
dlistint_t *cmp = head;

while (cmp != NULL)
{
cmp = cmp->next;
j++;
}
if (index <= j)
{
for (i = 0; i <= index; i++)
{
if (i == index)
return (head);

head = head->next;
}
}
return (NULL);
}

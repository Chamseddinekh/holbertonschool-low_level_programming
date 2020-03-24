#include "lists.h"
/**
 * insert_nodeint_at_index - pop list
 * @head: list to print
 * @idx: index to print
 * @n : data to insert
 * Return: return node content
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned   int i, j = 0;
listint_t *len, *cmp, *ptr  = *head;
len = *head;
while (len != NULL)
{
len = len->next;
j++;
}
if (idx <= j)
{
cmp = malloc(sizeof(listint_t));
if (!cmp)
return (NULL);
}
else
return (NULL);
if (idx == 0)
{
cmp->n = n;
cmp->next = ptr;
*head = cmp;
return (cmp);
}
for (i = 0; i < idx; i++)
{
if (i == idx)
{
cmp->n = n;
cmp->next = ptr->next;
ptr->next = cmp;
return (cmp);
}
ptr = ptr->next;
}
return (NULL);
}

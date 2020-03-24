#include "lists.h"
/**
 * get_nodeint_at_index - pop list
 * @head: list to print
 * @index: index to print
 * Return: return node content
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned   int i, j = 0;
listint_t *cmp = head;

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

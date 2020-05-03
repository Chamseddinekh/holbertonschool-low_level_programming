#include "lists.h"

/**
* delete_dnodeint_at_index - adeletes the node at index
* @head: pointer to head of list
* @index:index of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *p_ptr, *n_ptr;
unsigned int i;

if (head || *head)
return (-1);
p_ptr = NULL;
n_ptr = *head;
if (index == 0)
{
*head = (*head)->next;
free(n_ptr);
return (1);
}
for (i = 0; i < index; i += 1)
{
if (n_ptr == NULL)
return (-1);
p_ptr = n_ptr;
n_ptr = n_ptr->next;
}
if (p_ptr)
p_ptr->next = n_ptr->next;
free(n_ptr);
return (1);
}

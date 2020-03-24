#include "lists.h"
/**
 * pop_listint - pop list
 * @head: list to print
 * Return: return n
 */
int pop_listint(listint_t **head)
{
listint_t *ptr = *head;
int n;
if (*head == NULL)
return (0);

n = ptr->n;
free(ptr);
*head = ptr->next;
return (n);
}

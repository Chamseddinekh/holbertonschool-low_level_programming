#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: list to print
 * @n: element of the list
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *ptr;
tmp = malloc(sizeof(dlistint_t));
if (tmp == NULL)
return (NULL);
tmp->n = n;
tmp->next = NULL;
if (*head == NULL)
*head = tmp;
else
{
ptr = *head;
while (ptr->next)
ptr = ptr->next;
ptr->next = tmp;
}
return (ptr);
}

#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: list to print
 * @n: element of the list
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *ptr;
tmp = malloc(sizeof(listint_t));
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

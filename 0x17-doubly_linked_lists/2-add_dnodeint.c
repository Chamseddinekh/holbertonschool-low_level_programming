#include "lists.h"
/**
 * add_dnodeint - print list
 * @head: list to print
 * @n: element of the list
 * Return: element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

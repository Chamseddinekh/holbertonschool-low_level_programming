#include "lists.h"
/**
 * add_dnodeint - print list
 * @head: list to print
 * @n: element of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

(*head)->prev = new;


return (new);
}

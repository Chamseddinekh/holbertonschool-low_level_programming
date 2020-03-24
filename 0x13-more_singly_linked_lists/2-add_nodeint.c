#include "lists.h"
/**
 * add_nodeint - print list
 * @head: list to print
 * @n: element of the list
 * Return: element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}

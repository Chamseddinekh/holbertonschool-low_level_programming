#include "lists.h"
/**
 * print_listint - print list
 * @h: list to print
 * Return: number of elemets
 */
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

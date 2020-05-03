#include "lists.h"
/**
 * dlistint_len - calculate length
 * @h: list
 * Return: number of elemets
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

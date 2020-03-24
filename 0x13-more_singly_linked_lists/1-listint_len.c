#include "lists.h"
/**
 * listint_len - calculate length
 * @h: list
 * Return: number of elemets
 */
size_t listint_len(const listint_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}

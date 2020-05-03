#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - function
 *@head: list
 *@idx: int
 *@n: int
 *Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
        new->prev = NULL;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
	}
	new->next = node->next;
	node->next = new;

	return (new);
}
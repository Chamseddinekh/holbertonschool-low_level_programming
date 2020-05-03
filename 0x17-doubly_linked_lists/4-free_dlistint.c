#include "lists.h"
/**
 * free_dlistint - free linked list
 * @head: list to print
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
}

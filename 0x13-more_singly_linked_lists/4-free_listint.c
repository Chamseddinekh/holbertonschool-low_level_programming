#include "lists.h"
/**
 * free_listint - free linked list
 * @head: list to print
 */
void free_listint(listint_t *head)
{
while (head != NULL)
{
free(head);
head = head->next;
}
}

#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: list to print
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head)
{
while (*head != NULL)
{
ptr = *head;
*head = (*head)->next;
free(ptr);
}
head = NULL;
}
}

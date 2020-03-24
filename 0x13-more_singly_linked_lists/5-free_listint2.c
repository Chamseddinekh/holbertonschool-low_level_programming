#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: list to print
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;
if (ptr)
{
while (ptr)
{
ptr = ptr->next;
free(ptr);
}
*head = NULL;
}
}

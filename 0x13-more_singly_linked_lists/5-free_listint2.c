#include "lists.h"
/**
 * free_listint2 - free linked list
 * @head: list to print
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;

while (ptr)
{
free(ptr);
*head = NULL;
ptr = ptr->next;
}



}

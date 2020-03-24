#include "lists.h"
/**
 * sum_listint - print sum of data
 * @head: list to print
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head)
{
while(head)
{
sum += head->n;
head = head->next;
}

}
return (sum);
}

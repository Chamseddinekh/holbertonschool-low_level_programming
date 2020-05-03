#include "lists.h"
/**
 * sum_dlistint - print sum of data
 * @head: list to print
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head)
{
while (head)
{
sum += head->n;
head = head->next;
}

}
return (sum);
}

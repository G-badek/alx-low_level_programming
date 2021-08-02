#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 * @head: head of the linked list
 * Return: Sum of the data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
{
return (sum);
}
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

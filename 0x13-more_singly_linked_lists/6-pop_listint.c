#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of node list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
int value = 0;
listint_t *newNode = NULL;
if (!*head)
{
return (0);
}
newNode = (*head)->next;
value = (*head);
(*head) = newNode;
return (value);
}

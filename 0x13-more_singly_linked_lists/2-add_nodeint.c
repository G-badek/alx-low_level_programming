#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: number of index in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = (listint_t *)malloc(sizeof(listint_t));
if (!newNode)
{
return (NULL);
}
newNode->n = n;
newNode->next = (*head);
(*head) = newNode;
return (newNode);
}

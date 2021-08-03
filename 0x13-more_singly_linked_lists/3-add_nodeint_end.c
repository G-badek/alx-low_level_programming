#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: index of node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
listint_t *lastNode = (*head);
if (!newNode)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (!(*head))
{
(*head) = newNode;
return (*head);
}
while (lastNode->next)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
return (newNode);
}

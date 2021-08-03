#include "list.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: linked lists
 * Return: void
 */
void free_listint(listint_t *head)
{
if (head == NULL)
{
return;
}
free_listint(head->next);
free(head);
}

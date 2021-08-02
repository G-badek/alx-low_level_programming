#include "list.h"

/**
 * free-listint - frees a listint_t list
 * @head: linked lists
 * Return: void
 */
void free_listint(listint_t *head)
{
if (head)
{
free_listint(head->next);
free(head);
}
}

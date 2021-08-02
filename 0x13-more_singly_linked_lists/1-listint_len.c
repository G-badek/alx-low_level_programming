#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: the head of the list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
unsigned int count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}

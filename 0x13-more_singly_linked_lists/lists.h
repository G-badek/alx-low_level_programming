#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif

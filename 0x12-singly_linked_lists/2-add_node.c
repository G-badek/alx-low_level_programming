#include "lists.h"
#include <stddef.h>

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
int i;
for (i = 0; s[i]; i++)
{
;
}
return (i);
}

/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
int i, len;
char *content;
list_t *new;
if (str == NULL || head == NULL)
{
return (NULL);
}
len = _strlen(str);
new = *head;
content = malloc((len + 1) * sizeof(char));
if (content == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
content[i] = str[i];
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(content);
return (NULL);
}
new->str = content;
new->len = len;
new->next = *head;
*head = new;
return (new)
}

/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;
char *dupstr;
if (str == NULL)
{
return (NULL);
}
dupstr = _strdup(str);
if (dupstr == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = dupstr;
new->len = _strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
return (*head);
}

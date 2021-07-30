#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
 * _strdup - recreation of string duplicate function
 * @src: source of string to duplicate
 * Return: pointer to malloc'd space with copied string
 */
void *_strdup(const char *src)
{
int len, i;
char *dest;

len = _strlen(src);
dest = malloc((len + 1) * sizeof(char));
if (dest == NULL)
{
return (NULL);
}
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

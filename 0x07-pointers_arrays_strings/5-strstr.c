#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: string
 * @needle: strings of character
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, p;
int flag = 1;
if (*needle == 0)
return (haystack);
for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(haystack + i) == *(needle + 0))
{
flag = 0;
for (j = 0, p = i; *(needle + j) != '\0'; j++, p++)
{
if (*(haystack + p) != *(needle + j))
flag = 1;
}
}
if (flag == 0)
{
return (haystack + i);
}
}
return (0);
}

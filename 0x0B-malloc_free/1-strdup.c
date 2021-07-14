#include "holberton.h"
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a new string
 * @str: Strings of characters
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *strDup;
	int i, j;
	if (str == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	i++;
	strDup = malloc(sizeof(char) * i);
	if (strDup == NULL)
	{
	return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
	strDup[j] = str[j];
	j++;
	}
	return (strDup);
}

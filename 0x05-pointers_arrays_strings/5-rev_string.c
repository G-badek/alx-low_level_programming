#include "holberton"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 * Return: Reversed String
 */
void rev_string(char *s)
{
char tmp;
int len = 0, i;
while (s[len])
{
len++;
}
for (i = 0; i < len; i++)
{
s[i] = s[len - i];
}
}

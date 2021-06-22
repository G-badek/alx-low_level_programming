#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry Point
 * No Description:
 * Return: 0 (Success)
 */
int main(void)
{
int i;
char p[] = "Holberton";
for (i = 0; i < 9; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}

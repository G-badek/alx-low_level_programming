#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints all arguments including the first one
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}

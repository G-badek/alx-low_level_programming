#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: The number of arguments
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}

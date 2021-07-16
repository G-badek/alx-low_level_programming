#include "holberton"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if(mem == NULL)
{
exit(98);
}
return (mem);
}

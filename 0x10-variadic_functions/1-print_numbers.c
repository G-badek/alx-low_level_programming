#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_number - print numbers followed by \n
 * @separator: string printed between numbers
 * @n: fixed argument, type unsigned int
 * @...: optional argument(s)
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list dgts;
int d;
if (separator != NULL || n != 0)
{
va_start(dgts, n);
for (i = 0; i < n; i++)
{
d = va_arg(dgts, int);
printf("%d", d);
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(dgts);
}
printf("\n");
}

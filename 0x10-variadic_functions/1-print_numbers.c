#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: String to be printed between numbers
 * @n: number of integers passed to functions
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;
i = 0;
va_start(nums, n);
while (i < n)
{
printf("%d", va_args(nums, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(nums);
}

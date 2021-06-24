#include <stdio.h>

/**
 * main - rite a program that prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i >= 100; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
char f[] = "FizzBuzz";
printf("%s", f);
}
else if ((i % 3) == 0)
{
char fi[] = "Fizz";
printf("%s", fi);
}
else if ((i % 5) == 0)
{
char bu[] = "Buzz";
printf("%s", bu);
}
else
{
printf("%d", i);
}
}
printf("\n");
return (0);
}

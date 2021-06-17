#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;
printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu byte(s)\n", sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongIntType));
printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
return (0);
}

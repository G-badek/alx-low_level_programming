#include <stdio.h>

/*
 *main - Entry Point
 *
 *
 *Return - Always return 0 (success)
 */
int main(void)
{
  char charType;
  int intType;
  long int longIntType;
  long long int longLongIntType;
  float floatType;

  printf("Size of a char: %zu byte(s)\n", sizeof(charType));
  printf("Size of an int: %zu byte(s)\n", sizeof(intType));
  printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
  printf("Size of a float: %zu byte(s)\n", sizeof(longLongIntType));

  return (0);
}

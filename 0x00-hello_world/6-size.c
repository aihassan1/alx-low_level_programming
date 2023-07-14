#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  size_t size;

  size = sizeof(char);
  printf("Size of a char: %zu byte(s)\n", size);

  size = sizeof(int);
  printf("Size of an int: %zu byte(s)\n", size);

  size = sizeof(long int);
  printf("Size of a long int: %zu byte(s)\n", size);

  size = sizeof(long long int);
  printf("Size of a long long int: %zu byte(s)\n", size);

  size = sizeof(float);
  printf("Size of a float: %zu byte(s)\n", size);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Description: Multiplies two command-line arguments and prints the result.
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int y;
if (argc != 3)
{
printf("Error\n");
return (1);
}
y = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", y);
return (0);
}

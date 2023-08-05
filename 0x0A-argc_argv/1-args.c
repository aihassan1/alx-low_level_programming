#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Description: a program that prints the number of arguments passed into it.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%d\n", (argc - 1));
(void)argv;
return (0);
}

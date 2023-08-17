#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_fun)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_fun = get_op_func(argv[2]);

if (!op_fun)
{
printf("Error\n");
return (99);
}
result = op_fun(num1, num2);
printf("%d\n", result);
return (0);
}

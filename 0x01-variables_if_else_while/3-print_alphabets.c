#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int y;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (y = 'A' ; y <= 'Z' ; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}

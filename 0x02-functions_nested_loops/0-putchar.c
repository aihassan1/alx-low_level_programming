#include <unistd.h>

/**
 * _putchar - Custom putchar function
 * @c: The character to print
 * Return: On success, returns the character printed.
 * On error, returns -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
 * main - Entry point

 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
return 0;
}

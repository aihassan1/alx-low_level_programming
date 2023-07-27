#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
char mapping[] = "aAeEoOtTlL";
char leet_equivalent[] = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; mapping[j] != '\0'; j++)
{
if (str[i] == mapping[j])
{
str[i] = leet_equivalent[j];
break;
}
}
}
return (str);
}

#include "main.h"
/**
* get_endianness - Checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
int number = 1;
char *ptr = (char *)(&number);

if (*ptr)
{
return (1);
}
else
return (0);
}


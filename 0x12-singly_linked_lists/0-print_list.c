#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in the linked list.
 */

size_t print_list(const list_t *h)
{
const list_t *ptr = h;
int i = 0;

while (ptr != NULL)
{
if (ptr->str == NULL)
{
printf("[0] (nil)\n");
ptr = ptr->next;
}

printf("[%d] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
i++;

}
return (i);
}

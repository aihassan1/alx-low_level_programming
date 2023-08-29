#include "lists.h"
#include <stdlib.h>
/**
* free_listint - Frees a listint_t list.
* @head: Pointer to the head of the list.
*
* Description: Frees all nodes of a linked list and sets the head to NULL.
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

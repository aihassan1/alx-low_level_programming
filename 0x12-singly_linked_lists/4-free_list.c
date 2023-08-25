#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* free_list - Frees a linked list along with its string data.
* @head: Pointer to the head of the linked list.
*/

void free_list(list_t *head)
{
list_t *temp = head;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);


}
}

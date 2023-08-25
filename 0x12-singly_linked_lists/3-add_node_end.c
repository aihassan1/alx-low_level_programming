#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Adds a new node at the END of a linked list.
* @head: Double pointer to the head of the linked list.
* @str: String to be stored in the new node.
* Return: Address of the new head of the linked list.
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr = *head;
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
return (NULL);
}


new_node->str = strdup(str);
 new_node->len = strlen(str);
new_node->next = NULL;


if (new_node->str == NULL)
{
return (NULL);
}


if (*head == NULL)
{
*head = new_node;
}
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_node;
}

return (new_node->len);

}

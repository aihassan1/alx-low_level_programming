#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - Removes the head node of a listint_t list.
* @head: A pointer to a pointer to the head of the list.
*
* Return: The data of the removed node.
*/
int pop_listint(listint_t **head)
{
listint_t *node = *head;
int data = (*head)->n;

*head = (*head)->next;
free(node);
return (data);
}

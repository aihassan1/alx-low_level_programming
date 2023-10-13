#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all elements.
* @head: A pointer to the head of the doubly linked list.
*
* Return: The sum of all elements in the list.
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;

if (head == NULL)
return (0);

while (temp != NULL)
{
sum = sum + temp->n;
temp = temp->next;
}
return (sum);
}
